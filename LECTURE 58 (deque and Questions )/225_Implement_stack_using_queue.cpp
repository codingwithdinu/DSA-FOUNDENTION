#include <iostream>
#include <queue>
using namespace std;

class Stack1{
    queue<int> q1;
    queue<int> q2;
    public:
    Stack1(){
    }

    void push(int x){
        while(!q1.empty()){
            q2.push(q1.top());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty()){
            q1.push(q2.top());
            q2.pop();
        }
    }
    
    void pop(){
        q1.pop();
    }

    int top(){
        return q1.front();
    }

    bool empty(){
        return q1.empty();
    }
};

