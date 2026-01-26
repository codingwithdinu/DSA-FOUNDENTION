#include <iostream>
using namespace std;

int partition(int arr[], int l ,int r){
    int pivot = arr[r];
    int i=l-1;
    int j=l;
    for(; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    i++;
    swap(arr[i] , arr[j]);
    return i;
}

int Kthsmallest(int arr[] , int l , int r ,int k ){
    if(k>0 && k<=r-l+1){
        int pos = partition(arr,l,r);

        if(pos-l == k-1){
            return arr[pos];
        }
        else if (pos-l  > k-1){
            return Kthsmallest(arr,l,pos-1,k);
        }
        else{
            return Kthsmallest(arr,pos+1,r,k-pos+l-1);
        }
    }

    return -1;
}

int main(){
    int arr[] = {3, 4, 6,1,9,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 5;

    cout<<Kthsmallest(arr,0,n-1,k)<<endl;
}