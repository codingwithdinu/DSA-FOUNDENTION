#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/* ===============================
   Method 1: Extra Array + Sort
   =============================== */
void mergeWithExtraSpace(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> ans;

    for (int i = 0; i < m; i++) {
        ans.push_back(nums1[i]);
    }
    for (int i = 0; i < n; i++) {
        ans.push_back(nums2[i]);
    }

    sort(ans.begin(), ans.end());

    for (int i = 0; i < m + n; i++) {
        nums1[i] = ans[i];
    }
}

/* ===============================
   Method 2: Optimized In-Place
   =============================== */
void mergeOptimized(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    int m = 3;
    int n = 3;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};  // size = m+n
    vector<int> nums2 = {4, 5, 6};

    // Call any ONE method 👇
    // mergeWithExtraSpace(nums1, m, nums2, n);
    mergeOptimized(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }

    return 0;
}
