// In C++, recursion is a technique in which a function calls itself repeatedly until a given condition is satisfied. 
// It is used for solving a problem by breaking it down into smaller, simpler sub-problems. Then finding the solution of 
// it and combining this solution to find the global solution.

#include <iostream>
using namespace std;

void printHello(int n) {
    if (n == 0) return;
    cout << "Hello" << endl;
    printHello(n - 1);
}

int main() {
    printHello(5);
    return 0;
}


// Recursive Function
// A function that calls itself is called a recursive function. When a recursive function is called, it executes a set of 
// instructions and then calls itself to execute the same set of instructions with a smaller input. A recursive function should contain,
// Recursive Case: Recursive case is the way in which the recursive call is present in the function. (printHello(n - 1);)
// Base Condition: The base condition is the condition that is used to terminate the recursion. (if (n == 0) return;)

#include <iostream>
using namespace std;
int nSum(int n) {
    // Base condition to terminate
    // recursion when N = 0
    if (n == 0)
        return 0;
    // recursive case / recursive call
    int res = n + nSum(n - 1);
    return res;
}
int main() {
    // Calling the function
    int sum = nSum(5);
    cout << sum;
    return 0;
}


// Memory Management in C++ Recursion
// Like all other functions, the recursive function's data is stored in the stack memory in the form of a stack frame. 
// This stack frame is deleted once the function returns some value. In recursion,

// 1.The function call is made before returning the value, so the stack frame for the progressive recursive calls is stored
//  on top of existing stack frames in the stack memory.
// 2.When the topmost function copy returns some value, its stack frame is destroyed, and the control comes to the function 
// just before that particular copy after the point where the recursive call was made for the top copy.
// 3.The compiler maintains an instruction pointer to track where to return after the function execution.

