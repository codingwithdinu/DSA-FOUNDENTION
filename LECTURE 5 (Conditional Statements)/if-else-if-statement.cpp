#include <iostream>
using namespace std;
int main(){
    // if-else statement
    // syntax : if(condition1){.....  statement1 .....
    // .......} else if(condition2){.......statement2
    // .........} else if (condition3){....statement3
    // ........}


    int mark;
    cout<<("enter your mark:");
    cin>>mark;

    if(mark>80){
        cout<<"A";
    }else if(mark>60){
        cout<<"B";
    }else if(mark>40){
        cout<<"C";
    }

    return 0;

}