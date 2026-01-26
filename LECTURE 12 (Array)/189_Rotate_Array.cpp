#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void RotateArray(vector<int> &nums , int k){
    vector<int> arr(nums.size());

    for(int i=0; i<nums.size(); i++){
        arr[(i+k)%7] = nums[i];
    }
    for(int j=0; j<arr.size(); j++){
        nums[j] = arr[j];
    }
}
void Rotate(vector<int> &nums , int k){
    k = k % nums.size();

    reverse(nums.begin() , nums.end());
    reverse(nums.begin() , nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};

    Rotate(arr , 3);

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}