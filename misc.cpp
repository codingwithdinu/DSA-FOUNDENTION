#include <iostream>
using namespace std;
int main(){
    //misc operations
    // Sizeof Operator
    // Condition?Exp1:Exp2 ternary operator
    // Comma Opertor
    // Dot and arrow Operator
    // Casting Operator
    // & Address Operator
    //  Address Operator

    int a=4;
    cout<<sizeof(a)<<endl;

    char name='a';
    cout<<sizeof(name)<<endl;

    bool flag;
    a==name? flag=true:flag=false;
    cout<<flag<<endl;

    cout<<&a<<endl;
    return 0;
}