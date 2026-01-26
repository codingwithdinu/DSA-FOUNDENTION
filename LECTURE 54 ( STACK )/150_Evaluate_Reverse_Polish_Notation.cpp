#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int postfix(vector<string> &st){
    stack<int> s;
    int ans = 0;
    int x = 0;
    int y = 0;

    for(int i=0; i<st.size(); i++){
        if(st[i] == "+"){
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            ans = x + y;
            s.push(ans);
        }else if(st[i] == "-"){
            x = s.top();
            s.pop();
            y = s.top();
            s.pop();
            ans = x - y;
            s.push(ans);    
        }else if(st[i] == "*"){
            x = s
    }
    return ans;
}

int main(){
    vector<string> st ={"2", "1" ,"+" ,"3" ,"*"};
    cout<<postfix(st);
}