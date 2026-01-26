// C++ vector is a dynamic array that stores collection of elements 
// same type in contiguous memory. It has the ability to resize itself
//  automatically when an element is inserted or deleted.


// Create a Vector
// Before creating a vector, we must know that a vector is defined 
// as the std::vector class template in the <vector> header file.
// vector<T> v;
// where T is the type of elements and v is the name assigned to the vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // Creating an empty vector
    vector<int> v1;

    // Creating a vector of 5 elements with
    // default value
    vector<int> v2(5, 9);

    // Creating a vector of 5 elements from
    // initializer list
    vector<int> v1 = {1, 4, 2, 3, 5};
    
    return 0;
}



// Insert Elements
// An element can be inserted into a vector using vector insert() method which 
// takes linear time. But for the insertion at the end, the vector push_back() 
// method can be used. It is much faster, taking only constant time.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'f', 'd'};
  
  	// Inserting 'z' at the back
  	v.push_back('z');
  
  	// Inserting 'c' at index 1
  	v.insert(v.begin() + 1, 'c');

  	for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}



// Delete Elements
// An element can be deleted from a vector using vector erase() but this method 
// needs iterator to the element to be deleted. If only the value of the element 
// is known, then find() function is used to find the position of this element.

// For the deletion at the end, the vector pop_back() method can be used, and 
// it is much faster, taking only constant time.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Deleting last element 'z'
  	v.pop_back();
  
  	// Deleting element 'f'
  	v.erase(v.end()-2);

    // v.clear();  delete all elements
  	
  	for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}


// Access or Update Elements
// Just like arrays, vector elements can be accessed using their index inside the
//  [] subscript operator. While accessing elements, we can also update the value 
// of that index using assignment operator =. The [] subscript operator doesn't check 
// whether the given index exists in the vector or not. So, there is another member method 
// vector at() for safely accessing or updating elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Accessing and printing values
  	cout << v[3] << endl;
  	cout << v.at(2) << endl;
  	
  	// Updating values using indexes 3 and 2
  	v[3] = 'D';
  	v.at(2) = 'F';
  	
  	cout << v[3] << endl;
  	cout << v.at(2);
    return 0;
}


// Find Vector Size
// One of the common problems with arrays was to keep a separate variable to store
//  the size information. Vector provides the solution to this problem by providing size() method.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Finding size
    cout << v.size();
  
    return 0;
}


// Traverse Vector
// Vector in C++ can be traversed using indexes in a loop. The indexes start from 0 and go up 
// to vector size - 1. To iterate through this range, we can use a loop and determine the size 
// of the vector using the vector size()method.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> v = {'a', 'c', 'f', 'd', 'z'};

    // Traversing vector using range based for loop
  	for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}


// Vector resize()
// In C++, the vector resize() is a built-in method used to change the size of vector container 
// after it is declared. It can be used to increase or decrease the size of vector.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    // Creating vector of size 5
    vector<int> v(5);

    // Vetor resized to 9
    v.resize(9);

    cout << v.size();
    return 0;
}

// Decrease the Size of Vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Vector resized to 3
    v.resize(3);

    for (auto i: v)
      cout << i << " ";
    return 0;
}

// Increase Size and Initialize New Elements

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 4, 6};

    // Vector resized to 7 and added 
    // elements initialized to 9
    v.resize(7, 9);

    for (auto i : v)
        cout << i << " ";
    return 0;
}