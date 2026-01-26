#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// <<<<<<< DSA-SERIES
int main(){
    int m = 3;
    int n = 3;
    vector<int> nums1 = {1,2,3,4,5,6};
    vector<int> nums2 = {9,8,7};

// =======
// Brute Force Approach
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
// >>>>>>> main
    vector<int> ans;
    for(int j=0; j<m; j++){
        ans.push_back(nums1[j]);
    }
    for(int i=0; i<n; i++){
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(),ans.end());
// <<<<<<< DSA-SERIES

    for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
    }
// =======
    for(int k=0; k<m+n; k++){
        nums1[k] = ans[k];
    }
}

void merged(vector<int> &nums1 , int m , vector<int> &nums2 , int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i] > nums2[j]){
            nums1[k--] = nums1[i--];
        }else{
            nums1[k--] = nums2[j--];
        }
    }
    while(j>=0){
        nums1[k--] = nums2[j--];
    }
}

int main(){
    int m = 6;
    int n = 3;
    vector<int> nums1 = {1,2,3,9,8,7};
    vector<int> nums2 = {4,5,6};

    merge(nums1, m, nums2, n);
    for(int i=0; i<m+n; i++){
        cout<<nums1[i]<<" ";
    }

// >>>>>>> main
}