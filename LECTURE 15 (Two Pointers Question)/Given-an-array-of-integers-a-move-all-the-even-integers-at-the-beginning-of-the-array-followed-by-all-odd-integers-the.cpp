#include <iostream>
#include <vector>
using namespace std;

// Given-an-array-of-integers-a-move-all-the-even-integers-at-the-beginning-of-the-array-followed-
// by-all-odd-integers-the-relative-order-of-odd-or-even-integers-does-not-matter-return-any-array-that-satisfies-the-condition
void sortByParity(vector<int> &v){

    int left =0;
    int right = v.size()-1;

    while(left<right){
        if(v[left]%2==1 && v[right]%2==0){
            swap(v[left] , v[right]);
            left++;
            right--;

        }else if(v[left]%2==0){
            left++;
        }else if(v[right]%2==1){
            right--;
        }
    }
    return;

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

    sortByParity(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
} 