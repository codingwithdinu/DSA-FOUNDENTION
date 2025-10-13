#include <iostream>
#include <vector>
using namespace std;

class Queue {
    int front;
    int rear;
    vector<int> v;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int data) {
        v.push_back(data);
        rear++;
        if (front == -1) {  // first element
            front = 0;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty\n";
            return;
        }
        if (front == rear) { // last element removed
            front = -1;
            rear = -1;
            v.clear();
        } else {
            front++;
        }
    }

    int getFront() {
        if (isEmpty()) return -1;
        return v[front];
    }

    bool isEmpty() {
        return front == -1;
    }
};

int main() {
    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue();
    qu.enqueue(400);


    while (!qu.isEmpty()) {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }
    return 0;
}
