// An array is a derived data types that is used to store multiple values of similar 
// data types in a contiguous memory location and stored homogenous items.

// syntax :  datatype arrayname [ array size];
// Initialization : arr[ ] = {1,2,3,4,5};

// Elements of an array can be accessed by their position (called index) in the sequence. 
//  indexes of an array starts from 0 instead of 1. We just have to pass this index inside
//  the [] square brackets with the array name

// It is important to note that index cannot be negative or greater than size of the array 
// minus 1. (0 ≤ index ≤ size - 1). Also, it can also be any expression that results in valid index value.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 8, 12, 16};
    
    // Accessing fourth element
    cout << arr[3] << endl;
    
    // Accessing first element
    cout << arr[0];
    
    return 0;
}



// Update Array Elements
// To change the element at a particular index in an array, just use the = assignment operator
//  with new value as right hand expression while accessing the array element.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 8, 12, 16};
    
    // Updating fourth element
    arr[3] = 90;
    cout << arr[3] << endl;
    
    // Updating first element
    arr[1] = 90;
    cout << arr[0];
    
    return 0;
}


// Size of Array
// In C++, we do not have the length function as in Java to find array size, but it can be calculated 
// using sizeof() operator trick. First find the size occupied by the whole array in the memory, then 
// divide it by the size of the single element. As all the elements will have same size (due to being same type),
//  this will give us the size/length of the array.

#include <iostream>
using namespace std;

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'f'};

    // Size of one element of an array
    cout << "Size of arr[0]: " << sizeof(arr[0])
    << endl;

    // Size of  'arr'
    cout << "Size of arr: " << sizeof(arr) << endl;

    // Length of an array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of an array: " << n << endl;

    return 0;
}



// Traverse Array
// Traversing means visiting each element one by one. The advantage of array 
// is that it can be easily traversed by using a loop with loop variable that 
// runs from 0 to size - 1. We use this loop variable as index of the array and
//  access each element one by one sequentially.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 8, 12, 16};
    
    // Traversing and printing arr
    // for loop
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    // for each loop
    for(int element : arr){
        cout<<element<<endl;
    }

    //while loop
    int index=0;
    while(index<5){
        cout<<arr[index]<<endl;
        index++;
    }
    
    return 0;
}


// Arrays and Pointers
// In C++, arrays and pointers are closely related to each other. The array name can 
// be treated as a constant pointer that stored the memory address of the first element of the array.

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // Printing array name
    cout << arr << endl;
    
    // Printing address of first element
    cout << &arr[0];

    return 0;
}



// Input array from user

#include <iostream>
using namespace std;

int main() {
    char vowels[5];
    
    for(int idx=0; idx<5; idx++){
        cin>>vowels[idx];
    }
    for(int idx=0; idx<5; idx++){
        cout<<vowels[idx]<<" ";
    }
    
    return 0;
}




// types of arrys:
// 1. Single dimensional or one dimensional array
// 2. Multidimensional array