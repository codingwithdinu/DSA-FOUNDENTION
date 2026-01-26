#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. 
// DO NOT allocate another 2D matrix and do the rotation.


void rotateArray(vector<vector<int>> &vec){
    int n=vec.size();
    // transpose
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            swap(vec[i][j] , vec[j][i]);
        }
    }

    //reverse every row
    for(int i=0; i<n; i++){
        reverse(vec[i].begin(),vec[i].end());
    }
    return;
}

int main() {
    int n;
    cin>>n;

    vector<vector<int>> vec(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>vec[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
    cout<<endl;
    rotateArray(vec);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<vec[i][j]<<" ";
        }cout<<endl;
    }
}
