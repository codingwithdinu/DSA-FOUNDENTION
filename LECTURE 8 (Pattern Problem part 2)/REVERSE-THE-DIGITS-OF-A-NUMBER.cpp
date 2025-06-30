#include <iostream>
using namespace std;
int main(){

    //  REVERSE THE DIGITS OF A NUMBER

    int n;
    cin>>n;

    int lastdigit;

    while(n>0){
        lastdigit=n%10;
        n=n/10;
        cout<<lastdigit;
    }
    

    int m;
    cin>>m;
    int reverse=0;
    while(m>0){
        int lastdigit=m%10;
        reverse=reverse*10+lastdigit;
        m=m/10;
    }
    cout<<reverse<<endl;
}