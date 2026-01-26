// Bucket sort is a sorting technique that involves dividing elements into various groups, or buckets.
//  These buckets are formed by uniformly distributing the elements. 
// Once the elements are divided into buckets, they can be sorted using any other sorting algorithm. 
// Finally, the sorted elements are gathered together in an ordered fashion.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[] , int size){
    vector<vector<float>> bucket(size , vector<float> ());

    for(int i=0; i<size; i++){
        int index = arr[i]*size;
        bucket[index].push_back(arr[i]);
    }

    for(int i=0; i<size; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin() , bucket[i].end());
        }
    }

    int k=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }
}

int main(){
    float arr[] = {0.12 , 0.45, 0.78 , 0.15 , 0.41};
    int size = sizeof(arr)/sizeof(arr[0]);

    bucketSort(arr,size); 

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}


// if arr = {6.28 , 5.78 , 9.12 , 2.45 , 3.45}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int size) {
    vector<vector<float>> bucket(size);

    // finding min and max
    float max_ele = arr[0], min_ele = arr[0];
    for (int i = 0; i < size; i++) {
        max_ele = max(max_ele, arr[i]);
        min_ele = min(min_ele, arr[i]);
    }

    float range = (max_ele - min_ele) / size;

    // distributing elements into buckets
    for (int i = 0; i < size; i++) {
        int index = (arr[i] - min_ele) / range;
        if (index == size) index = size - 1; // clamp to last bucket
        bucket[index].push_back(arr[i]);
    }

    // sort individual buckets
    for (int i = 0; i < size; i++) {
        sort(bucket[i].begin(), bucket[i].end());
    }

    // concatenate buckets
    int k = 0;
    for (int i = 0; i < size; i++) {
        for (float val : bucket[i]) {
            arr[k++] = val;
        }
    }
}

int main() {
    float arr[] = {6.28, 5.78, 9.12, 2.45, 3.45};
    int size = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
