#include <iostream>
using namespace std;

int f(int *arr, int idx, int n){

    if(idx == n-1) return arr[idx];
    return max(arr[idx] , f(arr , idx+1, n));
}
int main(){
    int arr[] = {23, 3, 90 , 100 ,44};
    int n=5;
    cout<<f(arr,0,n)<<endl;
    return 0;
}