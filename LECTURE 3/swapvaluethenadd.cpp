#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}