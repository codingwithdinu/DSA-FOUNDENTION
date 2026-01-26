#include <iostream>
using namespace std;

// Count-the-numbers-of-triplets-whose-sum-is-equal-to-the-given-value-x

int main() {
    int array[]={3,1,2,4,0,6};
    int sum=0;
    int x;
    cout<<"enter x:";
    cin>>x;
    for(int i=0; i<sizeof(array)/sizeof(array[0]); i++){
        for (int j=i+1; j<sizeof(array)/sizeof(array[0]); j++){
            for(int z=j+1; z<sizeof(array)/sizeof(array[0]); z++){
                if(array[i]+array[j]+array[z]==x){
                    sum=sum+1;
                }
            }

        }
    }
    cout<<sum<<endl;
}