#include <iostream>
#include <vector>
using namespace std;

// Sort-an-array-consisting-of-only-0s-and-1s

void sortZeroAndOne(vector<int> &v){

    int left =0;
    int right = v.size()-1;

    while(left<right){
        if(v[left]==1 && v[right]==0){
            v[left++]=0;
            v[right--]=1;
        }else if(v[left]==0){
            left++;
        }else if(v[right]==1){
            right--;
        }
    }

    // int zeroes_count=0;
    // for(int ele:v){
    //     if(ele==0){
    //         zeroes_count++;
    //     }
    // }
    // for(int i=0; i<v.size(); i++){
    //     if(i<zeroes_count){
    //         v[i]=0;
    //     }else{
    //         v[i]=1;
    //     }
    // }
}

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;

    vector<int> v;
    
    for(int i=0; i<n; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }

    sortZeroAndOne(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 