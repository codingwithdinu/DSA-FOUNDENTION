#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// method 1 brute force approach O(n^2)
int main(){
    vector<int> v = {3,2,3};
    vector<int> freq(v.size(),0);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v.size(); j++){
            if(v[i] == v[j]){
                freq[i]++;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        if(freq[i] > v.size()/2){
            cout<<v[i]<<" ";
            break;
        }
    }
}

int majorityelement(vector<int> &nums){
    for(int val : nums){
        int freq = 0;
        for(int ele : nums){
            if(val == ele){
                freq++;
            }
        }
        if(freq > nums.size()/2){
            return val;
        }
    }
}

// method 2 optimize approach using sorting O(nlogn)

int majorityele(vector<int> &nums){

    sort(nums.begin() , nums.end());

    int freq = 1 ;
    int ans = nums[0];

    for(int i=1; i<nums.size(); i++){
        if(nums[i] == nums[i-1]){
            freq++;
        }else{
            freq = 1;
            ans = nums[i];
        }
        if(freq > nums.size()/2){
            return ans;
        }
    }
}


// Boyer–Moore Majority Vote Algorithm
// The Boyer-Moore voting algorithm is one of the popular optimal algorithms 
// which is used to find the majority element among the given elements that 
// have more than N/ 2 occurrences. This works perfectly fine for finding 
// the majority element which takes 2 traversals over the given elements, 
// which works in O(N) time complexity and O(1) space complexity.
// 
// When the elements are the same as the candidate element, 
// votes are incremented whereas when some other element is found 
// (not equal to the candidate element), we decreased the count

int majorityelem(vector<int> &nums){
    int freq = 0;
    int ans = 0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }

    return ans;
}