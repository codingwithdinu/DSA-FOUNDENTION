#include <iostream>
using namespace std;

int main() {

    // calculate the sum of all the elements in the given array

    int array[]={1,2,3,4,5};
    int sum=0;
    int size = sizeof(array)/sizeof(array[0]);
    for(int idex=0; idex<size; idex++){
        sum=sum+array[idex];
    }
    cout<<"sum of array  : "<<sum<<endl;
}