// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length)
//  such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). 
// For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, 
// return the index of target if it is in nums, or -1 if it is not in nums.

#include <iostream>
#include <vector>
using namespace std;

    int search(vector<int>& nums, int target) {
            int low =0;
    int high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == target) return mid;

        if(nums[mid] >= nums[low]){
            if(target >= nums[low] && target <= nums[mid]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }else{
            if(target <= nums[high] && target >= nums[mid]){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
    return -1;
    }
int main()
{
    vector<int> input = {4,5,6,7,0,1,2};
    int target = 0;
    cout << search(input, target) << endl;
}
