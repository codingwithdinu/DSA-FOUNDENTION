#include <iostream>
#include <stack>
using namespace std;

void Reverse(stack <int> &st){

    stack <int> temp1 , temp2;

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    while(!temp1.empty()){
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while(!temp2.empty()){
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}


// // Using Recursively Approach -> 
void insertAtBottom(stack <int> &st , int x){
    stack <int> temp;
    while(!st.empty()){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

void RecursiveReverse(stack <int> &st){
    if(st.empty()) return;
    int curr = st.top();
    st.pop();
    RecursiveReverse(st);
    insertAtBottom(st , curr);
}
int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    RecursiveReverse(st);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
}