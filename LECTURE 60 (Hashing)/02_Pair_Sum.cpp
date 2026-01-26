// 1. Two Sum
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void findpair(vector<int> &arr , int t){
    unordered_map<int , int > m;

    for(int i=0; i<arr.size(); i++){
        int comp = t - arr[i];
        if(m.count(comp)){
            cout<<m[comp]<<" "<<i<<endl;
            break;
        }
        m[arr[i]] = i;
    }
}

int main(){
    vector<int> arr = {2,7,5,6,8,9};
    int t = 9;
    findpair(arr,t);
}