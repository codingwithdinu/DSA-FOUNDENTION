#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string evaluation(string &prefix){
    stack<string> st;
    reverse(prefix.begin() , prefix.end());
    for(int i=0; i<prefix.size(); i++){
        if(isdigit(prefix[i])){
            st.push(to_string(prefix[i]-'0'));
        }
        else{
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string newpre = s1 + s2 + prefix[i];
            st.push(newpre);
        }
    }
    return st.top();
}
int main(){
    string prefix = "*+32-15";
    cout<<evaluation(prefix);
}