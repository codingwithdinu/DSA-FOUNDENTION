// Selection sort is a simple, in-place comparison sorting algorithm.
// It works by repeatedly finding the minimum element from the unsorted part of the list and putting it at the beginning of the sorted part.

// Algorithm Steps:

// Initialization: Start with the first element of the array as the current minimum.

// Iteration: Iterate through the unsorted portion of the array (from the current element to the end) to find the actual minimum element.

// Swap: If a new minimum element is found, update the index of the minimum. After iterating through the unsorted portion, 
// if the minimum element found is not at the current position, swap it with the element at the current position.

// Advance: Move the "sorted" boundary one position to the right, effectively excluding the newly placed minimum element from future comparisons.

// Repeat: Repeat steps 2-4 until the entire array is sorted.


// Example:

// Consider the array [64, 25, 12, 22, 11]. 
// Pass 1:
// Find the minimum element in [64, 25, 12, 22, 11], which is 11.
// Swap 11 with 64. Array becomes [11, 25, 12, 22, 64].

// Pass 2:
// Find the minimum element in the remaining unsorted part [25, 12, 22, 64], which is 12.
// Swap 12 with 25. Array becomes [11, 12, 25, 22, 64].

// Pass 3:
// Find the minimum element in [25, 22, 64], which is 22.
// Swap 22 with 25. Array becomes [11, 12, 22, 25, 64].

// Pass 4:
// Find the minimum element in [25, 64], which is 25.
// 25 is already in its correct position. No swap needed. Array remains [11, 12, 22, 25, 64].
// The array is now sorted.

// Characteristics:

// Time Complexity:
// O(n^2) in all cases (best, average, and worst), making it inefficient for large datasets.

// Space Complexity:
// O(1) as it sorts in-place, requiring minimal auxiliary space.

// Stability:
// Selection sort is not a stable sorting algorithm because it can change the relative order of equal elements.
// Swaps:
// It performs a minimal number of swaps (O(n)), which can be advantageous in scenarios where writes to memory are expensive.

#include <iostream>
#include <vector>
using namespace std;

void SelectionSorting(vector<int> &v){
    int n = v.size();
    for(int i=0; i<n-1; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(v[j]<v[min_idx]){
                min_idx = j;
            }
        }
        if(i!=min_idx){
            swap(v[i],v[min_idx]);
        }
    }
}
int main(){
    vector<int> v = {20,30,10,50,40};
    SelectionSorting(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}