// Counting Sort is a non-comparison-based sorting algorithm. 
// It is particularly efficient when the range of input values 
// is small compared to the number of elements to be sorted. 
// The basic idea behind Counting Sort is to count the frequency 
// of each distinct element in the input array and use that information 
// to place the elements in their correct sorted positions.

// Counting Sort Algorithm:
// 1. Declare an auxiliary array countArray[] of size max(inputArray[])+1 and initialize it with 0.
// 2. Traverse array inputArray[] and map each element of inputArray[] as an index of countArray[] array, i.e., execute countArray[inputArray[i]]++ for 0 <= i < N.
// 3. Calculate the prefix sum at every index of array inputArray[].
// 4. Create an array outputArray[] of size N.
// 5. Traverse array inputArray[] from end and update outputArray[ countArray[ inputArray[i] ] - 1] = inputArray[i]. Also, update countArray[ inputArray[i] ] = countArray[ inputArray[i] ]- - .


#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int> &v){
    int n = v.size();

    //find the max  element
    int max_ele = v[0];
    for(int i=0; i<n; i++){
        max_ele = max(v[i] , max_ele);
    }
     
    // create freq array
    vector<int> freq(max_ele + 1 , 0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    // cumulative freq
    for(int i=1; i<max_ele; i++){
        freq[i]+=freq[i-1];
    }

    //calculate the sorted array
    vector<int> ans(n);
    for(int i=n-1; i>=0; i--){
        ans[--freq[v[i]]] = v[i];
    }

    // copy of ans array
    for(int i=0; i<n; i++){
        v[i] = ans[i];
    }
}

int main(){
    vector<int> v = {0, 2 ,4 ,6 ,3 ,8,4};
    
    int n = v.size();

    countSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}