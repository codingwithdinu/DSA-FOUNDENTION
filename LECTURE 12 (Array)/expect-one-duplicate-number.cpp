// #include <iostream>
// #include <vector>
// using namespace std;

// int notduplicate(vector<int> &arr){
//     for(int i = 0; i < arr.size(); i++){
//         int count = 0;
//         for(int j = 0; j < arr.size(); j++){
//             if(arr[i] == arr[j]){
//                 count++;
//             }
//         }
//         if(count == 1){
//             return arr[i]; 
//         }
//     }
//     return -1; 
// }

// int main(){
//     vector<int> v = {1,1,2,2,3,4,4};
//     cout << notduplicate(v);
// }

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int minimum(vector<int> &arr){
  sort(arr.begin() , arr.end());
  return arr[0];
}

int Minele(vector<int> &arr){
    int ans = INT_MAX;
    for(int val : arr){
        ans = min(ans , val);
    }
    return ans;
}

int main(){
    vector<int> v = {4,3,5,2,1};
    cout<<Minele(v);
}