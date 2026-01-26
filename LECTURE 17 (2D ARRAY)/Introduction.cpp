// Multidimensional array syntax
// datatype array_name [size1][size2][size3]..............[sizeN];

// 2D array 
// datatype array_name [row][col];

// int array[3][3];
//                   col0             col1                col2

// row 0          array[0][0]      array[0][1]         array[0][2] 

// row 1          array[1][0]      array[1][1]         array[1][2] 
    
// row 2          array[2][0]      array[2][1]         array[1][2]      



// array[n][m];  elements = n x m
// Initialize
// int array[2][3] = { 1, 2, 3, 4, 5 ,6};
// int array[2][3] = { {1, 2, 3,} , {4, 5 ,6}};



// 3D array
// int array[3][2][4];
// means 3 x (2D ARRAY OF [2X4])

//                     col0                col1                   col2                    col3

// row 0          array[0][0][0]      array[0][0][1]         array[0][0][2]           array[0][0][3]
// row 1          array[0][1][0]      array[0][1][1]         array[0][1][2]           array[0][1][3]

// row 0          array[1][0][0]      array[1][0][1]         array[1][0][2]           array[1][0][3]
// row 1          array[1][1][0]      array[1][1][1]         array[1][1][2]           array[1][1][3]

// row 0          array[2][0][0]      array[2][0][1]         array[2][0][2]           array[2][0][3]
// row 1          array[2][1][0]      array[2][1][1]         array[2][1][2]           array[2][1][3]


// Taking 2D array as input
#include <iostream>
using namespace std;

int main() {
    int n ,m;
    cout<<"enter n & m:";
    cin>>n>>m;

    int array[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    
}