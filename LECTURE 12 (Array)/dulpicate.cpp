#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int> &arr){
  for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr.size()-i; j++){
      if(arr[i] > arr[j+1]){
        int temp = arr[i];
        arr[i] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  for(int i=0; i<arr.size(); i++){
    if(arr[i] == arr[i+1]){
      return true;
    }
  }
  return false;
}

int main(){
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<duplicate(arr);
}