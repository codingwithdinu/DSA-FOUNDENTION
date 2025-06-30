#include <iostream>
using namespace std;
int main(){

    //  COUNT THE NUMBER OF DIGITS FOR A GIVEN NUMBER n
    int n;
    cin>>n;

    int digits=0;

    while(n>0){
        digits++;
        n=n/10;
    }
    cout<<digits<<endl;
}