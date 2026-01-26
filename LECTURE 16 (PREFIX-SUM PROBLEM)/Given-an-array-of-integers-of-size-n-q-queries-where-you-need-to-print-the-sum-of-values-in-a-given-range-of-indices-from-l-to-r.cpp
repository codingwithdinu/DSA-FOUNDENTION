#include <iostream>
#include <vector>
using namespace std;

// Given-an-array-of-integers-of-size-n-q-queries-where-you-need-to-print-the-sum-of-values-in-a-given-range-of-indices-from-l-to-r


int main() {
    int n;
    cin>>n;
 
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++){
        cin>>v[i];
    }

    for(int i=1; i<=n; i++){
        v[i]+=v[i-1];
    }

    int q;
    cout<<"enter queries :";
    cin>>q;

    while(q--){
        int l ,r;
        cout<<"enter l and r :";
        cin>>l>>r;

        int ans;
        ans = v[r] - v[l-1];

        cout<<ans<<endl;
    }
}