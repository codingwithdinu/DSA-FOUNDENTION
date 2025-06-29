#include <iostream>
using namespace std;
int main(){
    // if-else statement
    // syntax : if(condition1){.....  statement1
    // if(condition2){......statement2....
    // ....}else{............
    // ....}else{...........
    // ....}


    int mark;
    cout<<("enter your mark:");
    cin>>mark;

    if(mark>33){
        if(mark>80){
            cout<<"Excellent!!";
        }else{
            cout<<"PASS!!";
        }else{
            cout<<"FAIL!!";
        }
    }
    return 0;

}