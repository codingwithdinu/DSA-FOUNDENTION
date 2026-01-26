// Deque or Double Ended Queue is a generalized version of Queue data structure that allows insert and delete at both ends.
// Deque can act as both Stack and Queue
// It is useful in many problems where we need to have a subset of all operations also like insert/remove at front and insert/remove at the end.
// It is typically implemented either using a doubly linked list or circular array.

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(90);   
    dq.push_back(80);   
    dq.push_back(70);   
    dq.push_back(60);
    dq.push_front(22);
    dq.push_front(32);
    dq.push_front(42);
    dq.push_front(52);
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}