#include <iostream>
using namespace std;
int main(){

    // prinnt the first multiple of 5 which is also a multiple of 7

    int i=5;
    while(true){
        if(i%7==0){
            cout<<i<<endl;
            break;
        }
        i+=5;

    }
    for(int i=5; ; i+=5){
            if(i%7==0){
            cout<<i<<endl;
            break;
        }

    }

}