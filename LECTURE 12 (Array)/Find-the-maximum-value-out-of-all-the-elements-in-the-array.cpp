#include <iostream>
using namespace std;

int main() {

    // find the max value out of all the elements in the array

    int array[]={3,4,6,8,1};
    int max=array[0]; 
    
    for(int i=1; i<5; i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<"max of array  : "<<max<<endl;
} 