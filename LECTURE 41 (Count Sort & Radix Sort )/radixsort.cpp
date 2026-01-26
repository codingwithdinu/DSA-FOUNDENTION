// Radix Sort is a linear sorting algorithm that sorts elements by processing them digit by digit.
//  It is an efficient sorting algorithm for integers or strings with fixed-size keys. 

// Rather than comparing elements directly, Radix Sort distributes the elements into buckets 
// based on each digit's value. By repeatedly sorting the elements by their significant digits,
//  from the least significant to the most significant, Radix Sort achieves the final sorted order.


#include <iostream> 
#include <vector>
using namespace std;

void countSort(vector<int> &v, int pos){
    int n = v.size();
    //create freq array
    vector<int> freq(10,0);
    for(int i=0; i<n; i++){
        freq[(v[i]/pos)%10]++;
    }

    //cumulative freq
    for(int i=1; i<10; i++){
        freq[i] += freq[i-1];
    }

    vector<int> ans(n);

    for(int i=n-1; i>=0; i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }

    for(int i=0; i<n; i++){
        v[i] = ans[i];
    }
}

radixSort(vector<int> &v){
    int n = v.size();
    int max_ele = v[0];
    for(int i=0; i<n; i++){
        max_ele = max(v[i] , max_ele);
    }

    for(int pos=1; max_ele/pos > 0; pos*=10){
        countSort(v,pos);
    }
}

int main(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    radixSort(v);

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}
