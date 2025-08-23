// Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int longestOnes(string str , int k){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;
    for(;end<str.length(); end++){
        if(str[end] == '0'){
            zero_count++;
        }
        while(zero_count>k ){
            if(str[start] == '0'){
                zero_count--;
            }
            start++;
        }
        max_length = max(max_length , end-start+1);
    }
    return max_length;
}

int main(){
    string str = "0001101011";
    int k = 3;
    cout<<longestOnes(str , k)<<endl;
}