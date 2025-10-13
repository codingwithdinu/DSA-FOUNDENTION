#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int calc(int v1, int v2, char op) {
    if (op == '^') return (int)pow(v2, v1);
    if (op == '*') return v2 * v1;
    if (op == '/') return v2 / v1;
    if (op == '+') return v2 + v1;
    if (op == '-') return v2 - v1;
    return 0;
}

int precedence(char ch) {
    if (ch == '^') return 3;
    else if (ch == '*' || ch == '/') return 2;
    else if (ch == '+' || ch == '-') return 1;
    return -1;
}

int EvaluationInfix(string &str) {
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (ch == ' ') continue;

        if (isdigit(ch)) {
            int num = 0;
            while (i < str.size() && isdigit(str[i])) {
                num = num * 10 + (str[i] - '0');
                i++;
            }
            i--; // adjust
            nums.push(num);
        }
        else if (ch == '(') {
            ops.push(ch);
        }
        else if (ch == ')') {
            while (!ops.empty() && ops.top() != '(') {
                char op = ops.top(); ops.pop();
                int v1 = nums.top(); nums.pop();
                int v2 = nums.top(); nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.pop();
        }
        else { // operator
            while (!ops.empty() && ((ch != '^' && precedence(ops.top()) >= precedence(ch)) ||
                                    (ch == '^' && precedence(ops.top()) > precedence(ch)))) {
                char op = ops.top(); ops.pop();
                int v1 = nums.top(); nums.pop();
                int v2 = nums.top(); nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(ch);
        }
    }

    while (!ops.empty()) {
        char op = ops.top(); ops.pop();
        int v1 = nums.top(); nums.pop();
        int v2 = nums.top(); nums.pop();
        nums.push(calc(v1, v2, op));
    }

    return nums.top();
}

int main() {
    string str = "2*(5*(3+6))/15-2";
    cout << EvaluationInfix(str) << endl;  // Expected 4
}
