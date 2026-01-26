// search if a given element is present in the array or not . 
// if it is not present then return -1 else return the index.

#include <iostream>
using namespace std;

int main() {

    int arr[]={1,2,4,5,6};

    int key=1;
    int ans=-1;

    for(int i=0; i<5; i++){

        if(arr[i]==key){
            ans=i;
        }
    }
    cout<<ans<<endl;
}