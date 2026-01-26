#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int leftmax = height[left];
        int rightmax = height[right];
        int ans = 0;

        while(left < right){
            leftmax = max(leftmax , height[left]);
            rightmax = max(rightmax , height[right]);
            if(leftmax < rightmax){
                ans += leftmax-height[left];
                left++;
            }else{
                ans += rightmax-height[right];
                right--;
            }
        }
        return ans;
    }
};


class SolutionA {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> lmax(n), rmax(n);

        // Left max
        lmax[0] = height[0];
        for (int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }

        // Right max
        rmax[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], height[i]);
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += min(lmax[i], rmax[i]) - height[i];
        }

        return ans;
    }
};


int main(){
    Solution obj;
    SolutionA objA;
    vector<int> arr = {4,2,0,6,3,2,5};
    cout<<obj.trap(arr)<<endl;
    cout<<objA.trap(arr);

}