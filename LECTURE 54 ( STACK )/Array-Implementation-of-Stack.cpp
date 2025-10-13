// Stack container follows LIFO (Last In First Out) order of insertion and deletion. 
// It means that most recently inserted element is removed first and the first inserted element will be removed last.
//  This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack.

// push() -> new elements can only be inserted at the top of the stack.
// pop()  -> only the top element of the stack can be deleted
// top()  -> Only the top element of the stack can be accessed
// empty() -> This checks whether the stack is empty. It returns true if the stack has no elements; otherwise, it returns false.
// size()  -> returns the number of elements currently in the stack.

// Array Implementation of Stacks
#include <iostream>
#include <climits>
using namespace std;

class Stack{
    int capacity;
    int* arr;
    int top;
    public:
    Stack(int c){
        capacity = c;
        arr = new int[c];
        top = -1;
    }

    void push(int data){
        if(top == capacity-1){
            cout<<"Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        top--;
    }

    int getTop(){
        if(top == -1){
            cout<<"Underflow"<<endl;
            return INT_MIN;
        }
        return arr[top];
    }

    bool IsEmpty(){
        return top == -1;
    }

    int size(){
        return top+1;
    }

    bool IsFULL(){
        return top==capacity;
    }
};

int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<endl;
    st.push(4);
    st.push(5);
    st.pop();
    cout<<st.getTop()<<endl;
    st.push(6);
    cout<<st.getTop()<<endl;
    st.push(7);
    cout<<st.getTop()<<endl;


}