#include <iostream> 
#include <vector>
using namespace std;

int PeakElement(vector<int> &input){
    int n = input.size();
    int low = 0;
    int high = input.size()-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid == 0){
            if(input[mid] > input[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid == n-1){
            if(input[mid] > input[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(input[mid] > input[mid+1]  && input[mid] > input[mid-1]){
                return mid;
            }
            else if(input[mid] > input[mid-1]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int> input = {1,4,3,8,5};
    cout<<PeakElement(input)<<endl;
}