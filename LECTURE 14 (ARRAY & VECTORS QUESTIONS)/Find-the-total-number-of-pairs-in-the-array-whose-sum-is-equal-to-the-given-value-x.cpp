#include <iostream>
using namespace std;

//Find-the-total-number-of-pairs-in-the-array-whose-sum-is-equal-to-the-given-value-x

int main() {
    int array[]={3,4,6,7,1};
    int sum=0;
    int x;
    cout<<"enter x";
    cin>>x;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for (int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            if(array[i]+array[j]==x){
                sum=sum+1;
            }
        }
    }
    cout<<sum<<endl;
}