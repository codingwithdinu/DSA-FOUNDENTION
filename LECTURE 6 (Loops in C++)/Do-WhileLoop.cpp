#include <iostream>
using namespace std;
int main(){

    // do-while loop syntax:
    // do{.........code
    // ........}while (condition);


    // print the sum of the stream of N integers in the input using do-while loop

    int n;
    cin>>n;

    int sum=0;
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);

    cout<<sum<<endl;
    return 0;


}