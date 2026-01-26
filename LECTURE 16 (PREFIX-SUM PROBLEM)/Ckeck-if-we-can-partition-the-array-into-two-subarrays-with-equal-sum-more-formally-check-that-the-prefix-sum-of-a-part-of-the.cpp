#include <iostream>
#include <vector>
using namespace std;

// Ckeck-if-we-can-partition-the-array-into-two-subarrays-with-equal-sum-more-formally-
// check-that-the-prefix-sum-of-a-part-of-the-array-is-equal-to-the-suffix-sum-of-rest-of-the-array
bool checkPrefixSuffixSum(vector<int> &v){
    int totalsum=0;

    for(int i=0; i<v.size(); i++){
        totalsum=totalsum+v[i];
    }
    int prefixsum=0;
    for(int i=0; i<v.size(); i++){
        prefixsum+=v[i];
        int suffixsum = totalsum - prefixsum;

        if(suffixsum==prefixsum){
            return true;
        }
    }
    return false;
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


    cout<<checkPrefixSuffixSum(v);

}