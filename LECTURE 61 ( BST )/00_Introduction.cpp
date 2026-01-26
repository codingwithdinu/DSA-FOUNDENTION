// Introduction to Binary Search Tree

// A Binary Search Tree (BST) is a special type of binary tree that maintains its elements in a sorted order.
// It is a non-linear, hierarchical data structure, where each node can have at most two children, 
// and elements are organized in a parent-child relationship. For every node in the BST:

// 1. All nodes in its left subtree have values less than the node’s value.
// 2. All nodes in its right subtree have values greater than the node’s value.
// 3. This property ensures that each comparison allows the operation to skip about half of the remaining tree, 
// making BST operations much faster than linear structures like arrays or linked lists.


// Key Properties
// 1. Unique ordering of elements means duplicates are usually not allowed.
// 2. Inorder traversal of a BST gives sorted order of elements.
// 3. Average height: O(log n) (for balanced BST).
// 4. Worst case height: O(n) (when tree becomes skewed).


// Operations in BST
// 1. Search : Finds whether a given key exists in the BST. Time Complexity on average is O(log n) and worst case is O(n)

// 2. Insertion : Insert a new node while maintaining BST property. Compare key with current node and move left/right recursively 
// or iteratively. Time Complexity on average is O(log n) and worst case is O(n)

// 3. Deletion : Remove a node while keeping BST valid. Node has no children means remove directly. 
// Node has one child means replace node with its child. Node has two children means replace node 
// with inorder successor/predecessor and delete that successor/predecessor. Time Complexity: average O(logn) and O(n) worst case.

// 4. Traversals : The four common tree traversals are Inorder (Left, Root, Right) which gives nodes in sorted order for a BST, 
// Preorder (Root, Left, Right), Postorder (Left, Right, Root), and Level-order, which traverses the tree level by level using a queue.


// Application of Binary Search Tree
// Searching and indexing (e.g., maps, sets).
// Dynamic sorting and range queries.
// Implementing symbol tables in compilers.
// Used in advanced structures (AVL Tree, Red-Black Tree, Splay Tree).