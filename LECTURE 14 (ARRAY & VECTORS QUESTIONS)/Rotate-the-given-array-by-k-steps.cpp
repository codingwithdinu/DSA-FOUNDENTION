// Rotate the given array by k steps where k is non-negative 
// note: k can be greater than size of array

 #include <iostream>
using namespace std;

int main() {
    int array[]={1,2,3,4,5};
    int n=5;
    int k=2;
    k=k%n;
    int ansarray[n];
    int j=0;

    for(int i=n-k; i<n; i++){
        ansarray[j++]=array[i];
    }
    for(int i=0; i<=k; i++){
        ansarray[j++]=array[i];
    }
    for(int i=0; i<n; i++){
        cout<<ansarray[i]<<" ";
    }
}



// second method 

// using reverse(v.begin(),v.end());

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v={1,2,3,4,5};
    int k=2;
    k=k%v.size();
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
}
