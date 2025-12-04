#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int m = 3;
    int n = 3;
    vector<int> nums1 = {1,2,3,4,5,6};
    vector<int> nums2 = {9,8,7};

    vector<int> ans;
    for(int j=0; j<m; j++){
        ans.push_back(nums1[j]);
    }
    for(int i=0; i<n; i++){
        ans.push_back(nums2[i]);
    }
    sort(ans.begin(),ans.end());

    for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
    }
}