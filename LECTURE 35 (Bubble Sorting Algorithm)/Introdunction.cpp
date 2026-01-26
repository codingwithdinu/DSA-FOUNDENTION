// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. 
// This algorithm is not suitable for large data sets as its average and worst-case time complexity are quite high.

// We sort the array using multiple passes. After the first pass, the maximum element goes to end (its correct position). 
// Same way, after second pass, the second largest element goes to second last position and so on.
// In every pass, we process only those elements that have already not moved to correct position. After k passes, 
// the largest k elements must have been moved to the last k positions.
// In a pass, we consider remaining elements and compare all adjacent and swap if larger element is before a smaller element.
//  If we keep doing this, we get the largest (among the remaining elements) at its correct position.


#include <iostream>
#include <vector>
using namespace std;

void BubbleSortArray(vector<int> &v){
    for(int i=0; i<v.size()-1; i++){
        for(int j=0; j<v.size()-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    return;
}
int main(){
    vector<int> v={4,7,9,3,2};
    BubbleSortArray(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}