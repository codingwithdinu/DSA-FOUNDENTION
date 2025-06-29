#include <iostream>
using namespace std;
int main(){
    // && Logical-and operator
    // || Logical-or operator
    // condition?exp1:exp2  Ternary operator


    int mark;
    cout<<("enter your mark:");
    cin>>mark;
    mark>33 ? cout<<"pass"<<endl : cout<<"fail"<<endl;


    int num;
    cin>>num;
    if((num%2==0) && (num%3==0)){
        cout<<num<<endl;
    }

    
    int num;
    cin>>num;
    if((num%2==0) || (num%3==0)){
        cout<<num<<endl;
    }
    return 0;

}