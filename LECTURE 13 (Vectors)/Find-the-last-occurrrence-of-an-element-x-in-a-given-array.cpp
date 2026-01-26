#include <iostream>
#include <vector>
using namespace std;

// Find-the-last-occurrrence-of-an-element-x-in-a-given-array

int main() {

    vector<int> v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    int x;
    cout<<"enter x:";
    cin>>x;

    int occurrrence=-1;
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurrrence=i;
        }
    }
    for(int i=v.size()-1; i>=0; i--){
        if(v[i]==x){
            occurrrence=i;
            break;
        }
    }
    cout<<occurrrence<<endl;
}