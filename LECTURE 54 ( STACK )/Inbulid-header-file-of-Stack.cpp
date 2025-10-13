// Stack is defined as std::stack class template inside the <stack> header file.
// syntax -> stack<T> st;
// T: DataType (int, char etc.) of elements in the stack.
// st: Name assigned to the stack.

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    st.push(5);
    st.pop();
    cout<<st.top()<<endl;
    st.push(6);
    cout<<st.top()<<endl;
    st.push(7);
    cout<<st.top()<<endl;

    cout<<endl;
    cout<<"size of stack:" <<st.size()<<endl;

    // Pseudo Traversal : By doing this till the copy stack is empty, we can effectively traverse without modifying the original stack.
    stack<int> temp(st);
    
    while(!temp.empty()) {
        cout << temp.top() <<endl;
        temp.pop();
    }


    cout<<endl;


    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }




}