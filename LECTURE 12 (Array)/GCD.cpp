#include <iostream>
#include <vector>
using namespace std;


int GCD(int a, int b){
    if(a == 0) return b;
    return GCD(b%a,a);
}

int findGCD(vector<int> &arr){
    int ans = arr[0];
    for(int i=1; i<arr.size(); i++){
        ans = GCD(arr[i] , ans);
    }
    if(ans == 1) return 1;

    return ans;
}


int main(){
    vector<int> v = {10,20,30,40};
    cout<<findGCD(v);
    return 0;
}