// default parameter value
// It is a value in the function declaration automtically
//  assigned by the compiler if the calling function does
//  not pass any value to that argument.


#include <iostream>
#include<cmath>
using namespace std;

int add(int a,int b=3 , int c=6){
    return (a+b+c);
}
int main(){
    cout<<add(5)<<endl;
    cout<<add(5,1)<<endl;
    cout<<add(5,1,9)<<endl;
}