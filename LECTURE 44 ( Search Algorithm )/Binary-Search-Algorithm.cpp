// It is used for a sorted array. It mainly compares the array's middle element first and if the middle element is same as input, 
// then it returns. Otherwise it searches in either left half or right half based on comparison result 
// (Whether the mid element is smaller or greater). This algorithm is faster than linear search and takes O(Log n) time.

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = 0; j < arr.size() - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int binarySearch(vector<int> &arr, int target) {
    bubbleSort(arr);
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target) return mid;

        if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {3,2,1,4,8,4,6,9,12,33,11,22};
    int target = 9;
    cout << binarySearch(arr, target) << endl;
}









// Recursive Binary Search
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int> &arr, int low, int high, int x) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);

        return binarySearch(arr, mid + 1, high, x);
    }
  return -1;
}

int main() {
    vector<int> arr = { 2, 3, 4, 10, 40 };
    int query = 10;
    int n = arr.size();
    int result = binarySearch(arr, 0, n - 1, query);
    if (result == -1) cout << "Element is not present in array";
    else cout << "Element is present at index " << result;
    return 0;
}
