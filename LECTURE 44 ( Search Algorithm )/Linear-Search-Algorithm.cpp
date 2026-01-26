// It is used for an unsorted array. It mainly does one by one comparison of the item to be search with array elements. 
// It takes linear or O(n) Time.

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> &arr, int traget){
    for(int i=0; i<arr.size(); i++){
        if(arr[i] == traget){
            return i;
        }
    }
}

int main(){
    vector<int> arr = {3,2,1,4,8,4,6,9,12,33,11,22};
    int traget = 9;
    cout<<linearSearch(arr, traget)<<endl;;


}