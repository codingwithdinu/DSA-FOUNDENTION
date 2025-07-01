#include <iostream>
#include<cmath>
using namespace std;


// Pass by Reference:

// 1.When an argument is passed by reference, an alias (or reference) to
//  the original variable's memory location is passed to the function.

// 2.The function directly accesses and operates on the original variable
//  through this reference. Therefore, any modifications made to the parameter
//  within the function directly affect the original variable in the calling scope.

// 3.This method is useful when the function needs to modify the original data 
// or when passing large objects to avoid the overhead of copying.

// 4.To denote a pass by reference, an ampersand (&) is used after the 
// data type in the function parameter declaration.

void changeValue(int &z){
    z=100;
}
int main(){

    int a=5;
    changeValue(a);
    cout<<a<<endl;
}