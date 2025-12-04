#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,4,3,2};

    int maxvalue = 0;
    for(int i=0; i<nums.size(); i++){
        maxvalue = max(maxvalue , nums[i]);
    }
    vector<int> count(maxvalue+1 , 0);

        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
        }
        int singlenumber = -1;
        for(int j=0; j<count.size(); j++){
            if(count[j] == 1) singlenumber = j;
        }


        for(int z=0; z<nums.size(); z++){
            cout<<nums[z]<<" ";
        }

        cout<<endl;

        for(int k=0; k<count.size(); k++){
            cout<<count[k]<<" ";
        }
        cout<<endl;

        cout<<singlenumber<<endl;
}



class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int maxvalue = 0;
        for(int i = 0; i < nums.size(); i++){
            maxvalue = max(maxvalue, nums[i]);  // ✅ FIX
        }

        vector<int> count(maxvalue + 1, 0);

        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }

        for(int j = 0; j < count.size(); j++){
            if(count[j] == 1)
                return j;
        }

        return -1;
    }
};
