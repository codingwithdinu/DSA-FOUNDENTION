#include <iostream>
using namespace std;

int fun(int *arr ,  int idx , int n){
    if(idx==n) return 0;

    cout<<arr[idx]<<endl;

    fun(arr , idx+1 , n);
}

int main(){
    int n=5;
    int arr[] ={1,2,3,4,5};
    fun(arr,0,n);
    return 0;
}