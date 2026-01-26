// A pointer is a variable that stores the address of another variable.
//  Pointers can be used with any data type, including basic types 
// (e.g., int, char), arrays, and even user-defined types like classes and structures.


// Create Pointer
// A pointer can be declared in the same way as any other variable but with an asterisk symbol (*) as shown:
// data_type* name
// Here, data_type is the type of data that the pointer is pointing to, and name is the name assigned to the pointer. The * symbol is also called dereference operator.

// int* ptr;
// In the above statement, we create a pointer ptr that can store the address of an integer data. It is pronounced as "Pointer to Integer" or "Integer Pointer"


// Assign Address
// The addressof operator (&) determines the address of any variable in C++. This address can be assigned to the pointer variable to initialize it.
#include <iostream>
using namespace std;
int main(){
    int val = 22;
    int* ptr = &val;
    cout<<ptr<<endl;
    cout<<&val<<endl;
}
// In the above statement, pointer ptr store the address of variable val using address-of operator (&). The pointer and the variable should be of same type, othewise type mismatch error occurs.



// Dereferencing
// The process of accessing the value present at the memory address pointed by the pointer is called dereferencing. This is done with the help of dereferencing operator as shown:
#include <iostream>
using namespace std;
int main() {
    int var = 10;
    
    // Store the address of 
    // var variable
    int* ptr = &var;
    
    // Access value using (*)
    // operator
    cout << *ptr;
    return 0;
}










