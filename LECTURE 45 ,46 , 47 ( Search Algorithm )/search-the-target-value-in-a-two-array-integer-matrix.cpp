// You are given an m x n integer matrix matrix with the following two properties:

// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.

#include <iostream> 
#include <vector>
using namespace std;

bool SearchMatrix(vector<vector<int>> &array , int target){
    int n = array.size();
    int m = array[0].size();
    int low = 0;
    int high = n*m-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        int x = mid/m;
        int y = mid%m;
        if(array[x][y] == target){
            return true;
        }
        else if(array[x][y] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> array = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 3;
    cout<<SearchMatrix(array , target)<<endl;
}