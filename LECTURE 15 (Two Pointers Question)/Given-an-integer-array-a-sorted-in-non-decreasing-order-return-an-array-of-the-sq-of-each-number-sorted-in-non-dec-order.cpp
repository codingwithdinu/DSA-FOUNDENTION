#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Given-an-integer-array-a-sorted-in-non-decreasing-order-return-an-array-of-the-sq-of-each-number-sorted-in-non-dec-order

void sortedSquaredArray(vector<int> &v){
    vector<int> ans;
    int left =0;
    int right = v.size()-1;

    while(left<=right){
        if(abs(v[left])<abs(v[right])){
            ans.push_back(v[right]*v[right]);
            right--;
        }
        else{
            ans.push_back(v[left]*v[left]);
            left++;
        }
    }

        reverse(ans.begin() , ans.end());
        for( int i=0; i<v.size(); i++){
            cout<<ans[i]<<" ";
        }
    

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

    sortedSquaredArray(v);
} 