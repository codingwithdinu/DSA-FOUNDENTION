#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* ================================
   Method 1: Brute Force O(n^2)
   ================================ */
int majorityElementBrute(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        int freq = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                freq++;
            }
        }
        if (freq > n / 2) {
            return nums[i];
        }
    }
    return -1;
}

/* ================================
   Method 2: Sorting O(n log n)
   ================================ */
int majorityElementSort(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int freq = 1;
    int n = nums.size();

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            freq++;
        } else {
            freq = 1;
        }

        if (freq > n / 2) {
            return nums[i];
        }
    }
    return nums[0];   // majority always exists
}

/* =========================================
   Method 3: Boyer–Moore Voting Algorithm
   Time: O(n), Space: O(1)
   ========================================= */
int majorityElementBoyerMoore(vector<int>& nums) {
    int count = 0;
    int candidate = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}

int main() {
    vector<int> nums = {3, 2, 3};

    cout << "Brute Force: "<< majorityElementBrute(nums) << endl;

    cout << "Sorting Method: "<< majorityElementSort(nums) << endl;

    cout << "Boyer-Moore: "<< majorityElementBoyerMoore(nums) << endl;

    return 0;
}
