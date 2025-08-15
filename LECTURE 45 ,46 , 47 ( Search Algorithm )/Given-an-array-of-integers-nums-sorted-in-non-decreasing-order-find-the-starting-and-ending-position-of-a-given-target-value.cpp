#include <iostream> 
#include <vector>
using namespace std;

int lowerbound(vector<int> &input , int target){
    int low = 0;
    int high = input.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(input[mid]>=target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}


int upperbound(vector<int> &input , int target){
    int low = 0;
    int high = input.size() - 1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(input[mid]>target){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> input = {1,2,3,3,3,5,11};
    int target = 3;
    vector<int> result;
    int lb = lowerbound(input , target);
    if(input[lb]!=target){
        result.push_back(-1);
        result.push_back(-1);
    }else{
        int ub = upperbound(input , target);
        result.push_back(lb);
        result.push_back(ub-1);
    }
    cout<<result[0]<<" "<<result[1]<<endl;
}



// leetcode question 34
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);

        // First occurrence
        int low = 0, high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                high = mid - 1; // search left
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        // If first occurrence not found, return {-1, -1}
        if (result[0] == -1) return {-1, -1};

        // Last occurrence
        low = 0;
        high = nums.size() - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result[1] = mid;
                low = mid + 1; // search right
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return result;
    }
};
