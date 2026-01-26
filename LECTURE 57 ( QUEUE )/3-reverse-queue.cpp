#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void ReverseRecursive(queue<int> &q){
    if(q.empty()) return;

    int front = q.front();
    q.pop();
    ReverseRecursive(q);
    q.push(front);
}

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);

    ReverseRecursive(qu);

    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
}