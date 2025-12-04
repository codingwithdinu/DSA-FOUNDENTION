#include <iostream>
#include <stack>
using namespace std;

class Queue1{
    stack<int> st;
public:
    Queue(){}
    void push(int x){
        this->st.push(x);
    }

    void pop(){
        if(this->st.empty()) return ;
        stack<int> temp;
        while(this->st.size() > 1){
            temp.push(st.top());
            st.top();
        }
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty(){
        return this->st.empty();
    }

    int front(){
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(this->st.size() > 1){
            temp.push(st.top());
            st.pop();
        }
        int result = this->st.top();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }
};

class Queue2{
    stack<int> s1;
    stack<int> s2;
    public:
    Queue2(){}

    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    void pop(){
        s1.pop();
    }

    int front(){
        if(s1.empty()) return -1;
        return s1.top();
    }

    bool empty(){
        return s1.empty();
    }

void display() {
    stack<int> temp = s1;   // copy

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

};


int main(){
    Queue2 q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.display();
    cout<<q.front();
    q.pop();
    cout<<q.front();
}

