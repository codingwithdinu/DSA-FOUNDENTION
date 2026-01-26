#include <iostream>
using namespace std;

class CircularQueue {
    int * arr;
    int currSize;
    int cap;
    int f,r;
public:
    CircularQueue(int val){
        this->cap = val;
        arr = new int[cap];
        f = 0;
        r = -1;
        currSize = 0;
    }
    
    bool empty(){
        return currSize == 0;
    }

    void Push(int data){
        if(currSize == cap){
            cout<<"Queue is full";
            return;
        }
        r = (r+1)%cap;
        arr[r] = data;
        currSize++;
    }

    void Pop(){
        if(empty()){
            cout<<"Queue is empty";
            return;
        }
        f= (f+1)%cap;
        currSize--;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }
};

int main(){
    CircularQueue q(5);
    q.Push(1);
    q.Push(2);
    q.Push(3);
    q.Push(4);
    q.Push(5);
    cout<<q.front();
    q.Pop();
    cout<<q.front();


}