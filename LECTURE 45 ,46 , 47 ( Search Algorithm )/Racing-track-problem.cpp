// A new racing track for kids is being built in New York with 'n' starting spots.
//  The spots are located along a straight line at positions x1, x2... xn (xi <=10^9). For each 'i', xi+1 > xi. 
// At a time only 'm' children are allowed to enter the race. Since the race track is for kids, they may run into each other while running.
//  To prevent this, we want to choose the starting spots such that the minimum distance between any two of them is as large as possible. 
// What is the largest minimum distance?
// The first line of input will contain the value of n, the number of starting spots.
// The second line of input will contain the n numbers denoting the location of each spot.
// The third line will contain the value of m, number of children.
// Input
// 1 2 4 8 9
// 3
// Output
// 3

#include <iostream>
#include <vector>
using namespace std;

bool CanPlaceStudents(vector<int> &pos , int student , int mid){
    int n = pos.size();
    int studentReq = 1;
    int lastPlaced = pos[0];
    for(int i=0; i<n; i++){
        if(pos[i] - lastPlaced >= mid){
            studentReq++;
            lastPlaced = pos[i];
            if(studentReq == student){
                return true;
            }
        }
    }
    return false;
}

int Race(vector<int> &pos , int student){
    int n = pos.size();
    int low = 1;
    int high = pos[n-1] - pos[0];
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;

        if(CanPlaceStudents(pos , student , mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
}


int main(){
    vector<int> pos = {1,2,4,8,9};
    int student = 3;
    cout<<Race(pos , student)<<endl;
}
