// Object Oriented Programming (OOP) is a style of programming that uses objects to model real-world things like data and behavior. 
// It focuses on key ideas like inheritance, encapsulation, and polymorphism.
//  The main goal of OOP is to group data and the functions that work on it together,
//   so that the data is protected and can only be changed in controlled ways.

// Characteristics of an Object-Oriented Programming Language
// 1. Class
// 2. Object
// 3. Encapsulation
// 4. Abstraction
// 5. Polymorphism
// 6. Inheritance


// Class
// In C++, the basic building block of Object-Oriented Programming is the class. 
// A class is a user-defined type that acts like a blueprint to create objects that share similar properties (data) and behaviors (functions).
// For example, 
// you can define an Animal class with properties like name, age, and species, and behaviors like eat(), sleep(), and makeSound().


// Object
// An object is a real, usable instance of a class that has specific properties and behaviors.
//  In C++, an object is created from a class.
// For example, 
// Animal is just an idea or blueprint, but a cat is a real object based on that class.
//  So, classes are concepts, and objects are the actual things created from those concepts.

#include <iostream>
using namespace std;

class Animal
{
  public:
    string species;
    int age;
    int name;
    // Member functions
    void eat()
    {
        // eat something
    }
    void sleep()
    {
        // sleep for few hrs
    }
    void makeSound()
    {
        // make sound;
    }
};

int main()
{
    Animal cat;
}
