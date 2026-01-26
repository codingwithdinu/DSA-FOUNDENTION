// Insertion sort is a simple sorting algorithm that builds a sorted array (or list) one element at a time.
//  It works by iteratively taking elements from the unsorted part of the array and inserting them into their correct 
// position within the already sorted part. 

// How it works:

// Initialization:
// The first element of the array is considered to be the initial sorted sub-array.

// Iteration:
// For each subsequent element in the unsorted part of the array:
// 1.Take the current element.
// 2.Compare it with the elements in the sorted sub-array, moving backward from the end of the sorted sub-array.
// 3.If an element in the sorted sub-array is greater than the current element, shift it one position to the right to make space.
// 5.Continue shifting until an element smaller than or equal to the current element is found, or the beginning of the sorted sub-array is reached.
// 6.Insert the current element into the newly created space.

// Completion:
// This process repeats until all elements from the unsorted part have been inserted into their correct positions in the sorted sub-array, resulting in a fully sorted array.

// Analogy:
// A common analogy for insertion sort is sorting a hand of playing cards. You hold a sorted set of cards in one hand and pick up cards one by one from the unsorted pile. 
// For each new card, you find its correct position among the sorted cards you're holding and insert it there.

// Time Complexity:
// Best Case: O(N) - Occurs when the array is already sorted. In this scenario, only N comparisons are needed.
// Worst Case: O(N^2) - Occurs when the array is sorted in reverse order. Each element needs to be compared and potentially shifted through the entire sorted sub-array.
// Average Case: O(N^2)

// Space Complexity:
// O(1) - Insertion sort is an in-place sorting algorithm, meaning it requires minimal additional memory space.

// Advantages:
// Simple to understand and implement.
// Efficient for small data sets.
// Efficient for nearly sorted data, as it approaches O(N) in such cases.
// Stable sorting algorithm (preserves the relative order of equal elements).

// Disadvantages:
// Inefficient for large data sets due to its O(N^2) worst-case time complexity.


#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int> &v){
    int n=v.size();

    for(int i=1; i<n; i++){
        int current = v[i];

        int j=i-1;
        while(j>=0 && v[j]>current){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = current;
    }
}
int main(){
    vector<int> v = {23,25,21,22,24};
    InsertionSort(v);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}