#include <iostream>
using namespace std;
int main(){

    // while loop syntax:
    // while (condition){.....code
    // .........}

    int i=1;

    while(i<5){

        cout<<i<<endl;
        i++;
    }


    // sum of n natural numbers

    int n;
    cout<<"enter number :";
    cin>>n;

    int sum=0;
    i=1; //loop variable
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<sum<<endl;
}