#include <iostream>
using namespace std;
int main(){

    // FIND-THE-SUM-OF-THE-SERIES-(1-2+3-4....n)

    int n;
    cin>>n;

    int result=0;
    for(int i=1; i<=n; i++){

        if(i%2==0){
            result=result-i;
        }else{
            result=result+i;
        }
    }
    cout<<result<<endl;
}