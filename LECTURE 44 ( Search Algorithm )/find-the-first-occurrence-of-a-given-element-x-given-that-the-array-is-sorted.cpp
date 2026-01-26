#include <iostream>
#include <vector>
using namespace std;

int firstOccurrence(vector<int> &input , int target){
    int low = 0;
    int high = input.size() - 1;
    int result = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(input[mid] == target){
            result = mid;
            high = mid-1;
        }
        else if(input[mid] > target){
            high = mid-1;
        }else {
            low = mid + 1;
        }
    }
    return result;
}
int main(){
    vector<int> input = {1,2,2,3,3,4,4,4,5,6,6,7,7};
    int target = 4;
    cout<<firstOccurrence(input , target)<<endl;;
}