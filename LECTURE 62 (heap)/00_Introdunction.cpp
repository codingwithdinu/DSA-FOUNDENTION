// A Heap is a complete binary tree data structure that satisfies the heap property:
//  for every node, the value of its children is greater than or equal to its own value.
//   Heaps are usually used to implement priority queues, where the smallest (or largest) 
//   element is always at the root of the tree.



// A Binary Heap is a special type of complete binary tree, meaning all levels are filled except possibly
//  the last, which is filled from left to right.

// It allows fast access to the minimum or maximum element. 
// There are two types of binary heaps: Min Heap and Max Heap.
// Min Heap: The value of the root node is the smallest, and this property is true for all subtrees.
// Max Heap: The value of the root node is the largest, and this rule also applies to all subtrees.
// Binary heaps are commonly used in priority queues and heap sort algorithms because of their efficient insertion and deletion operations.



// How is Binary Heap represented? 
// A Binary Heap is a Complete Binary Tree. A binary heap is typically represented as an array.

// The root element will be at arr[0].
// The below table shows indices of other nodes for the ith node, i.e., arr[i]:
// arr[(i-1)/2]	Returns the parent node
// arr[(2*i)+1]	Returns the left child node
// arr[(2*i)+2]	Returns the right child node