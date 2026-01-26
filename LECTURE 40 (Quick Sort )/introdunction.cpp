// QuickSort is a sorting algorithm based on the Divide and Conquer that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.
// There are mainly three steps in the algorithm:

// 1. Choose a Pivot: Select an element from the array as the pivot. T
//    he choice of pivot can vary (e.g., first element, last element, random element, or median).
// 2. Partition the Array: Re arrange the array around the pivot. After partitioning, 
//    all elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. The pivot is then in its correct position, and we obtain the index of the pivot.
// 3. Recursively Call: Recursively apply the same process to the two partitioned sub-arrays 
//    (left and right of the pivot).
// 4. Base Case: The recursion stops when there is only one element left in the sub-array, 
//    as a single element is already sorted.

#include <iostream>
using namespace std;

int partition(int arr[] , int first , int last){

    int pivot = arr[last];
    int i = first-1;

    for(int j=first; j<last; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    swap(arr[i+1] , arr[last]);

    return i+1;
}

void quickSort(int arr[] , int first , int last){

    //base case
    if(first>=last) return;

    int pi = partition(arr , first , last);
    quickSort(arr , first , pi-1);
    quickSort(arr , pi+1 , last);

}
int main(){
     int arr[] = {10 , 2 ,6 ,38, 33 ,44 ,56 ,9};
     int n = sizeof(arr)/sizeof(arr[0]);

     quickSort(arr , 0 , n-1);

     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }

     return 0;
}
