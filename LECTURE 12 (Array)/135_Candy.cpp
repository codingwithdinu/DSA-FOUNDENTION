#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> candys(n,1);

        ratings[-1] = 0;
        ratings[n+1] = 0;

        for(int i=0; i<n; i++){
            if(ratings[i] > ratings[i-1] || ratings[i] > ratings[i+1]){
                candys[i]++;
                if(candys[i] <= candys[i-1]){
                    candys[i]++;
                }
            }
        }

        return candys;
    }
};

int main(){
    Solution obj;
    vector<int> arr = {1,2,3,2,1,2,3,4,1};
    vector<int> result = obj.candy(arr);
    for(int candy : result){
        cout << candy << " ";
    }
    return 0;
}