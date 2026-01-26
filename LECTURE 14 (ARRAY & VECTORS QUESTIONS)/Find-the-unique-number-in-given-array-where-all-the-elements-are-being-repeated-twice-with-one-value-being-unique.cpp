#include <iostream>
using namespace std;

// Find-the-unique-number-in-given-array-where-all-the-elements-are-being-repeated-twice-with-one-value-being-unique.cpp
int main() {
    int array[]={1,1,2,2,3,4,4,5,5,6,6};


    int pair=0;

    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for(int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }

        }

    }
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }

}