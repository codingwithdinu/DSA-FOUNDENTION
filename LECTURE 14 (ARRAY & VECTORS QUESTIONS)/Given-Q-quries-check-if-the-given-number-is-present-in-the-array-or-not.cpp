#include <iostream>
#include <vector>
using namespace std;

// Given-Q-quries-check-if-the-given-number-is-present-in-the-array-or-not
// note: value of all the elements in the array is less than 10 to the power 5


int main() {

  vector <int> v={1,2,1,2,3,4,5,6};
  const int N=1e5+10;
  vector <int> freq(N,0);
  for(int i=0; i<v.size(); i++){
    freq[v[i]]++;
  }
  cout<<"enter quries :";
  int q;
  cin>>q;
  while(q--){
    int queryelement;
    cout<<"enter number:";
    cin>>queryelement;
    cout<<"number of repeation :"<<freq[queryelement]<<endl;
  }
    return 0;
}
