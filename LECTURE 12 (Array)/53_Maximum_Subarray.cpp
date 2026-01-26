// Kadane’s Algorithm is used to find the maximum sum subarray in an array
// in O(n) time using O(1) space.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumSubarray(vector<int> &nums){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        currSum += nums[i];
        maxSum = max(maxSum , currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int maxSumSubArrays(vector<int> &nums){
    int currsum = nums[0];
    int prevsum = nums[0];

    for(int i=1; i<nums.size(); i++){
        if(currsum < 0){
            currsum = nums[i];
        }else{
            currsum += nums[i];
        }

        if(currsum > prevsum){
            prevsum = currsum;
        }
    }

    return prevsum;
}


int maxSumSubArray(vector<int>& nums) {
    int curr = nums[0], best = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        curr = max(nums[i], curr + nums[i]);
        best = max(best, curr);
    }
    return best;
}


int main(){
    vector<int> nums = {3,-4,1,-1,-3,6,-4,3,4};
    cout<<maxSumSubarray(nums);
}