// You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.
// Evaluate the expression. Return an integer that represents the value of the expression.
// Note that:
// The valid operators are '+', '-', '*', and '/'.
// Each operand may be an integer or another expression.
// The division between two integers always truncates toward zero.
// There will not be any division by zero.
// The input represents a valid arithmetic expression in a reverse polish notation.
// The answer and all the intermediate calculations can be represented in a 32-bit integer.
// Example 1:
// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9

#include <iostream>
#include <stack>
#include <vector>
#include <math.h>
using namespace std;

int calc(int v1 ,int v2 , char op){
    if(op == '^'){
        return pow(v1,v2);
    }
    if(op == '*'){
        return v1*v2;
    }
    if(op == '/'){
        return v1/v2;
    }
    if(op == '+'){
        return v1+v2;
    }
    if(op == '-'){
        return v1-v2;
    }
}

int EvalvationPostfix(string &str){
    stack<int> st;
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(calc(v1,v2,ch));
        }
    }
    return st.top();
}
int EvalvationPrefix(string &str){
    stack<int> st;
    for(int i=str.size(); i>=0; i--){
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch-'0');
        }
        else{
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(calc(v1,v2,ch));
        }
    }
    return st.top();
}

int main(){
    string str = "-9+*531";
    cout<<EvalvationPrefix(str)<<endl;
}