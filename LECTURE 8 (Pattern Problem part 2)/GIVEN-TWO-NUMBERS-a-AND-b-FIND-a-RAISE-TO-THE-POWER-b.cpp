#include <iostream>
using namespace std;
int main(){

    // GIVEN-TWO-NUMBERS-a-AND-b-FIND-a-RAISE-TO-THE-POWER-b

    int a;
    cin>>a;
    int b;
    cin>>b;

    int result=1;
    for(int i=1; i<=b; i++){
        result=result*a;
    }
    cout<<result<<endl;
}