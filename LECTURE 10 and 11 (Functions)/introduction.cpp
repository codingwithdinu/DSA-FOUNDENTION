// // function is a logical set of code to perform a specific task

// // why are functions important in C++
// ✅ 1. Modular (Break into parts)
// You can divide big programs into small parts (functions), making it easier to write and understand.

// void printMessage() {
//     cout << "Hello!" << endl;
// }

// ✅ 2. Reusable
// You can write a function once and use it many times, avoiding repetition.

// int add(int a, int b) {
//     return a + b;
// }
// Can call add(5, 6) or add(2, 3) again and again


// ✅ 3. Easy to Debug and Maintain
// If there’s an error in a function, you only need to fix that small part — not the whole program.

// ✅ 4. Increases Readability
// Functions make your code clean and organized.

// ✅ 5. Supports Teamwork
// Different people can work on different functions at the same time.

// ✅ 6. Supports Recursion
// Functions can call themselves (recursion) for solving complex problems like factorials, Fibonacci, etc.

// ✅ 7. Encourages DRY Principle
// Don't Repeat Yourself — functions help you write less code that does more work.


// Types of functions
// 1.user defined functions
// 2.standard library functions


// how to declare functions
// return_type function_name (paramete1,parameter2...){
// ...........statement.....;
// }

// 🔹 Function Name:
// Identifier used to call the function.
// add()

// 🔹 Return Type:
// Type of value the function gives back.
// int, void, float, etc.

// 🔹 Parameters:
// Inputs passed to the function.
// int a, int b

// 🔹 Function Body:
// Code block that runs when function is called.
// { return a + b; }


// Call a Function 
// To call a fn in c++, you have to write the fn name followed by two parenthesis() and a semicolon ;

#include <iostream>
using namespace std;

int add(int num1 , int num2){
    int sum = num1+num2;
    return sum;
}
int main(){
    cout<<add(5,4)<<endl;
}