#include <iostream>
using namespace std;
int main(){

    // 1
    // 12
    // 123
    // 1234

    int n;
    int m;
    cout<<"enter value of n:"<<endl;
    cin>>n;
    cout<<"enter value of m:";
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;  
        }
        cout<<endl;
    }
}
