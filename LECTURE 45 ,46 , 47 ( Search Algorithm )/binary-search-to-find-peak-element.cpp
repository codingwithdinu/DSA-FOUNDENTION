// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. 
// If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. 
// In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.
// Input: nums = [1,2,3,1]
// Output: 2

#include <iostream> 
#include <vector>
using namespace std;

int PeakElement(vector<int> &input){
    int low = 0;
    int high = input.size()-1;
    int ans = -1;
    while (low <= high){
        int mid = low + (high-low)/2;
        if(mid == 0 || input[mid] > input[mid-1]){
            ans = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> input = {1,2,3,1};
    cout<<PeakElement(input)<<endl;
}