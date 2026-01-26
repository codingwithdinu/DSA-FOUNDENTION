// C++ template is a powerful tool that allows you to write a generic code that can work with any data type. 
// The idea is to simply pass the data type as a parameter so that we don't need to write the same code for different data types.

// For example, some sorting algorithm can work for different type, so rather than writing and maintaining multiple codes, 
// we can write one sort() and pass the datatype as a parameter.

#include <iostream>
using namespace std;

template <typename T >
class Node{
    public:
    T val;
    Node* next;
    Node(T data){
        val = data;
        next = NULL;
    }
};
int main(){
    Node<int>* node1 = new Node<int> (3);
    cout<<node1->val<<endl;

    Node<char>* node2 = new Node<char> ('a');
    cout<<node2->val<<endl;
}



//STL is a collection of pre-built classes and functions that make it easy to manage data using common data structures 
// like vectors, stacks, and maps. It saves time and effort by providing ready-to-use, efficient algorithms and containers.

// Components of STL
// 1. Containers
// Containers are the data structures used to store objects and data according to the requirement. 
// Each container is implemented as a template class that also contains the methods to perform basic operations on it. 
// Every STL container is defined inside its own header file.

// 2.Algorithms
// STL algorithms offer a wide range of functions to perform common operations on data (mainly containers). 
// These functions implement the most efficient version of the algorithm for tasks such as sorting, searching,
//  modifying and manipulating data in containers, etc. All STL algorithms are defined inside the <algorithm> and <numeric> header file.

// 3.Iterators
// Iterators are the pointer like objects that are used to point to the memory addresses of STL containers. 
// They are one of the most important components that contributes the most in connecting the STL algorithms with the containers. 
// Iterators are defined inside the <iterator> header file.

// The key benefits of the STL is :-
// Saves time and effort.
// Reliable and Tested
// Fast and Efficient
// Reusability
// Built-in Algorithms


// What is a List?
//  list container implements a doubly linked list in which each element contains the address of next and previous element in the list.
//  It stores data in non-contiguous memory, hence providing fast insertion and deletion once the position of the element is known.
 
// Itrator Function:
// begin()  -> Returns an iterator to the beginning of container.
// end()    -> Returns an iterator to the theoretical element just after the last element of the container.
// rbegin() -> Returns a reverse iterator to the beginning of container.
// rend()   -> Returns a reverse iterator to the theoretical element just after the last element of the container.
// advance(it, n) -> Advances an iterator by a specific number of positions.	

#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> l1 = {1,2,3,4,5};
    auto itr = l1.begin();
    cout<<*itr<<endl;

    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;

    for (auto itr = l1.rbegin(); itr != l1.rend(); itr++) {
        cout << *itr << " ";
    }cout<<endl;


// inserting element into a list
// list.insert(itr,value) -> insert value before the position of the itr.
// list.insert(itr,count,value) -> insert value count number of times before ite.
// list.insert(itr,str_itr,end_itr) -> insert value frome stritr to enditr before itr.
   
   advance(itr,2);
   l1.insert(itr, 5);
    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;

   l1.insert(itr,3,2);
    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;

    auto l = l1.begin();
    auto r = l1.begin();
    advance(r,2);
    l1.insert(itr,l,r);
    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;


// Delete elements from list
// list.erase(itr) -> delete the element pointed to by the itr.
// list.erase(str_itr , end_itr) -> delete elements from stritr to enditr.

    l1.erase(itr);
    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;


    auto str_itr = l1.begin();
    advance(str_itr , 2);
    auto end_itr = l1.begin();
    advance(end_itr,4);

    l1.erase(str_itr,end_itr);
    for (auto itr = l1.begin(); itr != l1.end(); itr++) {
        cout << *itr << " ";
    }cout<<endl;
}