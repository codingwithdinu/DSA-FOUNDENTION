#include <iostream>
#include <stack>
using namespace std;


// using iteration approach
stack<int> copyStack(stack<int> &st){
    stack <int> temp;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }

    stack <int> result;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }

    return result;
}

// using recursively approach
stack <int> recusive(stack <int> &st , stack <int> &res){
    if(st.empty()){
        return res;
    }

    int curr = st.top();
    st.pop();
    recusive(st , res);
    res.push(curr);

    return res;
}

int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    stack <int> res ;
    recusive(st , res);

    while(!res.empty()){
        int curr = res.top();
        res.pop();
        cout<<curr<<endl;
    }
}