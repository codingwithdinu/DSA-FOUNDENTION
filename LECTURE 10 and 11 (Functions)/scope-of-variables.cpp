#include <iostream>
#include<cmath>
using namespace std;


int b=6;    // b is global scope variable 

int main(){

    //scope of variables
    // part of the program from where variables is accessible
    // 1.local scope
    // 2.global scope


    // Local Scope (or Block Scope): Names declared within a function or a block of code
    //  (enclosed in curly braces {}) have local scope.
    //  They are only accessible within that specific function or
    //  block and cease to exist when the execution exits that block.

    // Global Scope: Names declared outside of any function, class, or 
    // namespace are in global scope. They are accessible from any 
    // part of the program from the point of declaration to the end 
    // of the file.

    int a=3;   // a is a local scope variable
    int b=2;   
    cout<<a<<endl;
    cout<<b<<endl;

    // scope resolution (::):- to access global variable if variable name is same
    cout<<::b<<endl;

}