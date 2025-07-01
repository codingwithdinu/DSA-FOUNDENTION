#include <iostream>
using namespace std;

int add(int num1,int num2 ){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2 ,int num3){
    int sum=num1+num2+num3;
    return sum;
}
double add(double num1,double num2 ){
    double sum=num1+num2;
    return sum;
}
int main(){
    cout<<add(5,4)<<endl;
    cout<<add(9,10,8)<<endl;
    cout<<add(6.9,8.9)<<endl;
    cout<<add(1,4)<<endl;
}