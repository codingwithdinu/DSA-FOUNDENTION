#include <iostream>
using namespace std;

int main(){
    int arr[3] = {12 , 44 ,66};
    
    int *ptr = &arr[0];

    cout<<ptr<<" "<<arr<<endl;  // arr = ptr means arr use like ptr

    cout<<ptr+1<<" "<<arr+1<<endl;

    cout<<*(ptr)<<" "<<*(arr)<<endl;
    cout<<*(ptr+1)<<" "<<*(arr+1)<<endl;
}