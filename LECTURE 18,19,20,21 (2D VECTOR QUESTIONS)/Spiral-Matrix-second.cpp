#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Given a positive integer n , generate nxn matrix filled with elements from 1 to n^2 in spiral order

vector<vector<int>> spiralOrder(int n){

    vector<vector<int>> result(n , vector<int>(n));
    int left=0; 
    int right=n-1;
    int top=0;
    int bottom=n-1;
    int count=1;
    int direction=0;

    while (left<=right && top<=bottom){
        // left-->right
        if(direction==0){
            for(int col=left; col<=right; col++){
                result[top][col]=count++;
            }
            top++;
        }
        // top-->bottom
        else if (direction==1){
            for(int row=top; row<=bottom; row++){
                result[row][right]=count++;
            }
            right--;
        }
        // right-->left
        else if(direction==2){
            for(int col=right; col>=left; col--){
                result[bottom][col]=count++;
            }
            bottom--;
        }
        // bottom-->top
        else{
            for(int row=bottom; row>=top; row--){
                result[row][left]=count++;
            }
            left++;
        }

        direction = (direction+1)%4;
    } 
    return result;  
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> matrix(n , vector<int> (n));

    matrix = spiralOrder(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
