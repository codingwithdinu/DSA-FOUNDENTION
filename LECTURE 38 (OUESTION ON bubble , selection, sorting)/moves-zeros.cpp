#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v={0,5,0,3,42};
    int n=v.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(v[j]==0  && v[j+1]!=0){
                swap(v[j], v[j+1]);
            }
        }       
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}  

