#include <iostream>
#include<cmath>
using namespace std;

// Pass by Value:
// 1.When an argument is passed by value, a copy of the original 
// variable's value is created and passed to the function.

// 2.The function operates on this separate copy, meaning any
//  modifications made to the parameter within the function do 
// not affect the original variable in the calling scope.

// 3.This method is suitable when the function does not need to 
// modify the original data and when the data type is relatively
// small (e.g., fundamental types like int, float, char), as copying 
// large objects can incur performance overhead. 


void changeValue(int z){
    z=100;
}
int main(){

    int a=5;
    changeValue(a);
    cout<<a<<endl;
}