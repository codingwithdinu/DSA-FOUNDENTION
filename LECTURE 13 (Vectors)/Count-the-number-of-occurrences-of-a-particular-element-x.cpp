#include <iostream>
#include <vector>
using namespace std;

// Count-the-number-of-occurrences-of-a-particular-element-x

int main() {

    vector<int> v(20);
    for(int i=0; i<20; i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter x:";
    cin>>x;

    int sum=0;

    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            sum=sum+1;
        }
    }
    cout<<sum<<endl;
}