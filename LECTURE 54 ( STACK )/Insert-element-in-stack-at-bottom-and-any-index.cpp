
// Using Iteration Approach ->
// Original stack: Top → [3, 2, 1] → Bottom
// Move everything to temp:
// temp = [1,2,3]
// st = []
// Push new element 0 into st:
// st = [0]
// Move everything back from temp to st:
// st = [3,2,1,0]

#include <iostream>
#include <stack>
using namespace std;

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


// Using Recursively Approach -> 
void insertRecusive(stack <int> &st , int x){
    if(st.empty()){
        st.push(x);   // base case
        return;
    }

    int curr = st.top();
    st.pop();
    insertRecusive(st , x);   // recursive case
    st.push(curr);
}


int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    insertRecusive(st , 100);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
}




// A stack is a LIFO (Last In First Out) structure. It only allows access to the top element.
// So, to insert at an arbitrary position (say index k from the bottom or from the top), we must:
// 1.Pop elements until we reach the desired position.
// 2.Insert the new element.
// 3.Push back the popped elements in the same order.

#include <iostream>
#include <stack>
using namespace std;

void insertAtPosition(stack <int> &st , int x , int k){
    stack <int> temp;
    int n = st.size();
    int count = 0;
    while(count < n-k){
        count++;
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


void insertAtPosRecursive(stack <int> &st , int x , int k){
    if(k == 0){
        st.push(x);
        return;
    }

    int curr = st.top();
    st.pop();
    insertAtPosRecursive(st , x , k-1);
    st.push(curr);
}

int main(){
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(4);
    st.push(5);

    insertAtPosRecursive(st , 100 , 2);

    while(!st.empty()){
        int curr = st.top();
        st.pop();
        cout<<curr<<endl;
    }
}