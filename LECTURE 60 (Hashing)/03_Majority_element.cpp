// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 3⌋ times. You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void majorityelement(vector<int> &nums){
    unordered_map<int , int > m;

    for(int i=0; i<nums.size(); i++){
        if(m.count(nums[i])){
            m[nums[i]]++;
        }else{
            m[nums[i]] = 1;
        }
    }

    for(pair<int , int> p : m){
        if(p.second > nums.size()/3){
            cout<<p.first;
        }
    }
}

int main(){
    vector<int> arr = {1,3,2,5,1,3,1,5,1};
    majorityelement(arr);
}