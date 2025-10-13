#include <iostream>
#include <stack>
using namespace std;

void deleteAtBottom(stack <int> &st){
    stack <int> temp;
    while(st.size() != 1){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}


// Using Recursively Approach -> 
void deleteAtBottomRecusive(stack <int> &st){
    if(st.size() == 1){
        st.pop();   // base case
        return;
    }

    int curr = st.top();
    st.pop();
    deleteAtBottomRecusive(st);   // recursive case
    st.push(curr);
}


// remove element in stack at any position
void RemoveAtPosition(stack <int> &st ,int k){
    stack <int> temp;
    int n = st.size();
    int count = 0;
    while(count < n-k-1){
        count++;
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
}

// Using Recursively Approach -> 
void RemoveAtPosRecursive(stack <int> &st ,int k){
    if(k == 0){
        st.pop();
        return;
    }

    int curr = st.top();
    st.pop();
    RemoveAtPosRecursive(st , k-1);
    st.push(curr);
}


int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    RemoveAtPosRecursive(st , 2);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
}

