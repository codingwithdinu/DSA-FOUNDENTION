#include <iostream>
using namespace std;

// Find-the-second-largest-element-in-the-given-array

int main() {

    int array[]={2,3,4,5,6,6,6,6};

    int max=array[0];
    int second_max=array[0];
    for(int i=0; i<8; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    for(int i=0; i<8; i++){
        if(array[i]>second_max && array[i]!=max){
            second_max=array[i];
        }
    }
    cout<<second_max<<endl;
}



// method second 


#include <iostream>
using namespace std;

// Find-the-second-largest-element-in-the-given-array


int largestElementIndex(int array[] , int size){
    int max = array[0];
    int maxindex = -1;
    for(int i=0; i<size; i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}

int main() {

    int array[]={1,2,3,4,5,7,6,7};
    int n=8;
    int indexoflargest = largestElementIndex(array,n);
    cout<<array[indexoflargest]<<endl;

    int largestelement = array[indexoflargest];
    for(int i=0; i<n; i++){
        if(array[i]==largestelement){
            array[i]=-1;
        }
    }

    int indexofsecondlargest = largestElementIndex(array,n);
    cout<<array[indexofsecondlargest]<<endl;
}