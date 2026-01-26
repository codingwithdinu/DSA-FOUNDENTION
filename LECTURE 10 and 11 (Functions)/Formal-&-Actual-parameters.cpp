#include <iostream>
#include<cmath>
using namespace std;


void myFunction(int a, double b) {
    // 'a' and 'b' are formal parameters
    // Function body
}
int main(){

    // formal parameters : These are the variables declared in the
    // function's definition or signature. 
    // They act as placeholders for the values that will 
    // be passed into the function when it is called. 
    // Formal parameters include their data types.

    // actual parameters : These are the specific values or expressions 
    // that are passed to a function when it is invoked or called.
    //  They provide the concrete data that the formal parameters 
    // will receive and work with within the function's scope. 
    // Actual parameters can be constants, variables, or even 
    // expressions.



    int x = 10;
    double y = 20.5;
    myFunction(x, y); // 'x' and 'y' are actual parameters
    myFunction(5, 15.7); // '5' and '15.7' are actual parameters
    return 0;
    

}
