#include <iostream>
using namespace std;


int main() {
    
    int array[]={1,2,3,4,5,1};

    int ansssum=0;
    int size = sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
        if(i%2==0){
            ansssum+=array[i];
        }else{
            ansssum-=array[i];
        }
    }
    cout<<ansssum<<endl;
}
