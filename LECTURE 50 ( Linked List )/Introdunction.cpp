// In C++, a linked list is a linear data structure that allows the users to store data in non-contiguous memory locations.
//  A linked list is defined as a collection of nodes where each node consists of two members which represents its value and 
// a next/previous pointer which stores the address for the next/previous node.

//Linked List Representation in C++
// In C++, linked lists are basically represented by a pointer to the first node, which is commonly referred to as the "head" of the list. 
// Each node in the list is defined by a structure that includes a data field and a pointer pointing to the same type of structure.
// This type of structure is known as a self-referential structure.

//Types of Linked Lists
// Singly Linked List
// Doubly Linked List
// Circular Linked List




// 1. Singly Linked List in C++
// The singly linked list is the simplest form of linked list in which the node contains two members data and 
// a next pointer that stores the address of the next node. Each node is a singly linked list is connected 
// through the next pointer and the next pointer of the last node points to NULL denoting the end of the linked list. 


// Singly linked list can be represented as a pointer to the first node, where each node contains:

// Data: Actual information is stored.
// Next: Pointer to the next node.

// Class  to represent the 
// singly linked list
class Node {
  
  // Data field - can be of 
  // any type and count
  int data;
  
  // Pointer to the next node
  struct Node* next;
}

#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node* n = new Node(1);
    cout<<n->val<<" "<<n->next<<endl;
}