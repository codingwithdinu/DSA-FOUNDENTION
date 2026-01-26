#include <iostream>
using namespace std;
int main(){
    // if-else statement
    // syntax : if(condition){.....  statement .....
    // .......} else {.......statement
    // .........}


    int mark;
    cout<<("enter your mark:");
    cin>>mark;

    if(mark>33){
        cout<<"PASS!";
    }else{
        cout<<"FAIL!";
    }

    return 0;

}