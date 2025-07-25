#include <iostream>
using namespace std;

int main(){
    int arr[2] = {1, 2};
    int *ptr = &arr[0];
    
    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr+1<<endl;
    cout<<*ptr++<<endl;  // post increment
    cout<<(*ptr)++<<endl;
}

int main(){
    int arr[2] = {1, 2};
    int *ptr = &arr[0];

    cout<<*++ptr<<endl; // pre increment
}

int main(){
    int arr[2] = {1, 4};
    int *ptr = &arr[0];
    
    cout<<++*ptr<<endl; //first derefrence then increment the derefrence value
}


