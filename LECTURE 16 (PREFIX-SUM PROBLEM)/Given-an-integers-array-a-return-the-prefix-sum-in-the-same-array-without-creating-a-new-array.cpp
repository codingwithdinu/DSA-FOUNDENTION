#include <iostream>
#include <vector>
using namespace std;

// Given-an-integers-array-a-return-the-prefix-sum-in-the-same-array-without-creating-a-new-array

void runningSum(vector<int> &v){

    for(int i=1; i<v.size(); i++){
        v[i]=v[i]+v[i-1];
    }
    return;
}
int main() {
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }

    runningSum (v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;

}