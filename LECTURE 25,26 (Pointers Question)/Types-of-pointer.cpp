// // There are four types of pointer
// // 1. NULL Pointer
// // NULL Pointer is a pointer that is pointing to nothing(i.e. not pointing to any valid object or memory location).
// //  In case, if we don’t have an address to be assigned to a pointer, then we can simply use NULL. NULL is used to
// //  represent that there is no valid memory address.

#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    cout<<ptr<<endl;   // 0
    cout<<*ptr<<endl;   // segmentation fault
}


// // 2. Wild Pointer
// // A pointer that has not been initialized to anything (not even NULL) is known as a wild pointer. The pointer may be initialized 
// // to a non-NULL garbage value that may not be a valid address. 
// // Due to this it ends up pointing to some random memory location.

#include <iostream>
using namespace std;

int main(){
    int *ptr;
    cout<<ptr<<endl;   // return garbage address 
    cout<<*ptr<<endl;   // retrun garbage value
}


// // 3. Dangling Pointer
// // A pointer pointing to a memory location that has been deleted (or freed) is called a dangling pointer. 
// // Such a situation can lead to unexpected behavior in the program and also serve as a source of bugs in C programs.
// // There are three different ways where a pointer acts as a dangling pointer:
// // 1. De-allocation of Memory
// // When a memory pointed by a pointer is deallocated the pointer becomes a dangling pointer.
// // 2. Function Call 
// // When the local variable is not static and the function returns a pointer to that local variable. 
// // The pointer pointing to the local variable becomes dangling pointer.
// // 3. Variable Goes Out of Scope
// // When a variable goes out of scope the pointer pointing to that variable becomes a dangling pointer.

#include <iostream>
using namespace std;

int main()
{
    // allocating memory
    int* value = new int(11);

    // freeing it
    delete value;

    // assigning null
    value = nullptr;

    // checking null before accessing value
    if (value == nullptr) {
        cout << "Memory is deallocated." << endl;
    }
    else {
        cout << "Value: " << value << endl;
    }
    return 0;
}



// // 4. Void Pointer
// // Void pointer is a specific pointer type - void * - a pointer that points to some data location in storage,
// // which doesn't have any specific type. Void refers to the type. 
// // Basically, the type of data that it points to can be any. Any pointer type is convertible to a void pointer hence it can point to any value. 

#include <iostream>
using namespace std;
int main(){
    float f = 10.2;
    int x = 9;
    void *ptr = &f;
    cout<<ptr<<endl; // segmentation fault due to this we use type casting 
}

#include <iostream>
using namespace std;
int main(){
    float f = 10.2;
    int x = 9;
    void *ptr = &f;
    int *integerPointer = (int*)ptr;
    cout<<*integerPointer<<endl;    
}
