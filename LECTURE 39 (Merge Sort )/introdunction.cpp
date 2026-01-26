// Merge sort is a popular sorting algorithm known for its efficiency and stability. 
// It follows the divide-and-conquer approach. It works by recursively dividing 
// the input array into two halves, recursively sorting the two halves and finally 
// merging them back together to obtain the sorted array.

// Here's a step-by-step explanation of how merge sort works:

// 1.Divide:  Divide the list or array recursively into two halves until it can no more be divided. 
// 2.Conquer:  Each subarray is sorted individually using the merge sort algorithm. 
// 3.Merge:  The sorted subarrays are merged back together in sorted order. 
// The process continues until all elements from both subarrays have been merged. 

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    int an = mid - l + 1;
    int bn = r - mid;

    // Dynamically allocate arrays
    int* a = new int[an];
    int* b = new int[bn];

    for (int i = 0; i < an; i++) {
        a[i] = arr[l + i];
    }
    for (int j = 0; j < bn; j++) {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < an && j < bn) {
        if (a[i] < b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    while (i < an) {
        arr[k++] = a[i++];
    }

    while (j < bn) {
        arr[k++] = b[j++];
    }

    // Free dynamically allocated memory
    delete[] a;
    delete[] b;
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;

    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
