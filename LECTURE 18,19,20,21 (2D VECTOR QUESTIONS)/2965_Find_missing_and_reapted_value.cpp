#include <iostream>
#include <vector>
using namespace std;

// class Solution {
// public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
//     }
// };

int main(){

    vector<int> v1 = {9,1,7};
    vector<int> v2 = {8,9,2};
    vector<int> v3 = {3,4,6};
    vector<vector<int>> V = {v1,v2,v3};


    int n = V.size();
    int N = n*n;
    vector<int> count(N ,0);

    for(int i=0; i<V.size(); i++){
        for(int j=0; j<V.size(); j++){
            count[V[i][j]]++;
        }
    }

    int repeated = -1;
    int missing = -1;

    for(int i=1; i<=N; i++){
        if(count[i] == 2) repeated = i;
        if(count[i] == 0) missing = i;
    }

    cout<<repeated<<" "<<missing<<endl;
}