#include <iostream>
using namespace std;
int main(){
    //bitwise operations
    // ~ bitwise complement
    // << bitwise left shift
    // >> bitwise right shift
    // | bitwise OR
    // & bitwise AND
    // ^ bitwise exclusive OR

    int num1=0;
    int num2=1;
    cout<<(~num2)<<endl;
    cout<<(num1>>1)<<endl;
    cout<<(num1<<1)<<endl;
    cout<<(num1&num2)<<endl;
    cout<<(num1|num2)<<endl;
    cout<<(num1^num2)<<endl;
    return 0;
}