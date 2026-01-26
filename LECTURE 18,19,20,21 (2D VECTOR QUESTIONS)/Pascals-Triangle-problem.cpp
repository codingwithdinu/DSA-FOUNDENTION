#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Given an integer n, return the first n rows of pascal's triangle.




//     vector<vector<int>> pascalTriangle(int n) {
//         vector<vector<int>> pascal;
//         for(int i=0;i<n;i++){
//             vector<int> row(i+1,1);
//             for(int j=1;j<i;j++){
//                 row[j]=pascal[i-1][j-1]+pascal[i-1][j];
//             }
//             pascal.push_back(row);
//         }
//         return pascal;

//     }


vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> pascal(n);

    for(int i=0; i<n; i++){
        pascal[i].resize(i+1);

        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
                pascal[i][j] = 1;
            }else{
                pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
            }
        }
    }
    return pascal;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> ans;
    ans = pascalTriangle(n);

    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << ans[i][j] << "   ";
        }
        cout << endl;
    }
}