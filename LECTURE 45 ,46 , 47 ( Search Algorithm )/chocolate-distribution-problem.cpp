// You have 'n'(n <= 10^5) boxes of chocolate. Each box contains a[i] (a[i] <= 10000) chocolates. 
// You need to distribute these boxes among 'm' students such that the maximum number of chocolates allocated to a student is minimum.
// a. One box will be allocated to exactly one student.
// b. All the boxes should be allocated.
// c. Each student has to be allocated at least one box.
// d. Allotment should be in contiguous order, for instance, a student cannot be allocated box 1 and box 3, skipping box 2.
// Calculate and return that minimum possible number.
// Assume that it is always possible to distribute the chocolates.
// The first line of input will contain the value of n, the number of boxes.
// The second line of input will contain the n numbers denoting the number of chocolates in each box.
// The third line will contain the m, number of students.
// Input
// 4
// 12 34 67 90
// 2
// Output
// 113


#include <iostream>
#include <vector>
using namespace std;

bool CanDistChoco(vector<int> &input , int mid , int student){
    int n = input.size();
    int studentReq = 1;
    int CurrSum = 0;
    for(int i=0; i<n; i++){
        if(input[i] > mid){
            return false;
        }
        if(CurrSum + input[i] > mid){
            studentReq++;
            CurrSum = input[i];
            if(studentReq > student){
                return false;
            }
        }
        else{
            CurrSum += input[i];
        }
    }
    return true;
}

int DistChoco(vector<int> &input , int student){
    int n = input.size();
    int low = input[0];
    int high = 0;
    for(int i=0; i<n; i++){
        high+=input[i];
    }
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;

        if(CanDistChoco(input , mid , student)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}


int main(){
    vector<int> input = {12,34,67,90};
    int student = 2;
    cout<<DistChoco(input , student)<<endl;
}