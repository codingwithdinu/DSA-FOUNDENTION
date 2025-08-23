// What is Encapsulation?
// Encapsulation means combining data and the functions that work on that data into a single unit, like a class.
// In Object-Oriented Programming, it helps keep things organized and secure.

#include <iostream>
using namespace std;

class ABC
{
    int x;   // Data

public:
    void set(int n)  // function
    {
        x = n;
    }

    int get()
    {
        return x;
    }
};

int main(){
    ABC obj1;
    obj1.set(3); //Encapsulation
    cout<<obj1.get()<<endl;
}



// What is Abstraction?
// Abstraction means displaying only essential information and ignoring the other details.
//  Data abstraction refers to providing only essential information about the data to the outside world, 
//  hiding the background details or implementation.
// Eg : pow(x,y) ---> means x^y




// What is Inheritance?
// a class inherits properties of another class 
// Types : 1. Single Inheritance
//         2. Multi-level Inheritance
//         3. Multiple Inheritance
//         4. Hierarchical Inheritance
//         5. Hybrid Inheritance

// 1. Single Inheritance
// Class A ----> Class B
// 2. Multi-level Inheritance
// Class A ----> Class B ----> Class C
#include <iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Parent Class"<<endl;
       }
};

class child: public Parent{
    public:
        child(){
            cout<<"Child Class"<<endl;
        }
};
class grandchild: public child{
    public:
        grandchild(){
            cout<<"GrandChild Class"<<endl;
        }
};


// 3. Multiple Inheritance
// Class A      Class B
//   \            /
//    \          /
//       Class C
class Parent1{
    public:
        Parent1(){
            cout<<"Parent 1 Class"<<endl;
       }
};
class Parent2{
    public:
        Parent2(){
            cout<<"Parent 2 Class"<<endl;
       }
};
class child: public Parent1 , public Parent2{
    public:
        child(){
            cout<<"Child Class"<<endl;
        }
};



// 4. Hierarchical Inheritance
//         Class A
//           /\
//          /  \
//         /    \
//     Class B  Class C 
class Parent1{
    public:
        Parent1(){
            cout<<"Parent 1 Class"<<endl;
       }
};

class child1: public Parent1{
    public:
        child1(){
            cout<<"Child 1 Class"<<endl;
        }
};
class child2: public Parent1{
    public:
        child2(){
            cout<<"Child 2 Class"<<endl;
        }
};



// 5. Hybrid Inheritance
//              Class A
//                /\
//               /  \
//              /    \
//          Class B  Class C 
//            /\
//           /  \
//          /    \
//     Class D  Class E




// Diamond Problem
// Base class multiple parent classes having a comman ancestor class
//              Class A
//              /      \
//             /        \
//            /          \
//       Class B        Class C 
//          |             |
//          |             |
//       CLass D       Class E
//          \            /
//           \          /
//            \        /
//              Class G 
// Double properties goes to class G



// What is Polymorphism?
// ability of objects to take differnt forms
// Types:
// 1. Compile Time --> (i) Function Overloading (ii) Operator Overloading
// 2. Run Time --> Virtual Function


//  (i) Function Overloading
// Two or more function have same name but behave differently for different parameter.
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

// Same function with different arguments
int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a = 5, b =7, c = 11;

    // Add function to add two numbers
    cout << add(a, b) << endl;

    // Add function to add three numbers
    cout << add(a, b, c);

    return 0;
}


// (ii) Operator Overloading
// C++ operators are the symbols that operate on values to perform specific mathematical or logical computations on given values.
//  They are the foundation of any programming language.
#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 3;

    // Addition
    cout << "a + b = " << (a + b) << endl;
  
    // Subtraction
    cout << "a - b = " << (a - b) << endl;
  
    // Multiplication
    cout << "a * b = " << (a * b) << endl;
  
    // Division
    cout << "a / b = " << (a / b) << endl;
  
    // Modulo
    cout << "a % b = " << (a % b) << endl;
  
    // Increament
    cout << "++a = " << ++a << endl;
  
    // Decrement
    cout << "b-- = " << b--;
    
    return 0;
}



// 2. Runtime Polymorphism
// // Also known as late binding and dynamic polymorphism, the function call in runtime polymorphism
//  is resolved at runtime in contrast with compile time polymorphism, where the compiler determines 
// which function call to bind at compilation. Runtime polymorphism is implemented using function overriding with virtual functions.


// Function Overriding
// Function Overriding occurs when a derived class defines one or more member functions of the base class. 
// That base function is said to be overridden. The base class function must be declared as virtual function for runtime polymorphism to happen.
#include <bits/stdc++.h>
using namespace std;

class Base {
public:

    // Virtual function
    virtual void display() {
        cout << "Base class function";
    }
};

class Derived : public Base {
public:

    // Overriding the base class function
    void display() override {
        cout << "Derived class function";
    }
};

int main() {
    
    // Creating a pointer of type Base
    Base* basePtr;
    
    // Creating an object of Derived class
    Derived derivedObj;

    // Pointing base class pointer to 
    // derived class object
    basePtr = &derivedObj;
    
    // Calling the display function 
    // using base class pointer
    basePtr->display();
    return 0;
}
