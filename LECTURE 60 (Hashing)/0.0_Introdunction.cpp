// 1️⃣ What is Hashing?

// Hashing is a technique to map data to fixed-size integers (indices) using a hash function,
// so that insertion, search, and deletion can be done in O(1) average time.

// Simple Idea:
// key → hash function → index in table

// Example:

// key = "apple"
// hash("apple") = 3
// store at table[3]

// 2️⃣ Hash Table

// A hash table is an array where:

// Each index is called a bucket

// Keys are stored based on their hash value

// Index:   0   1   2   3   4
// Value:  –   –  15  "cat" –

// 3️⃣ Hash Function

// A hash function converts a key into an index.

// Properties of a Good Hash Function

// ✅ Fast
// ✅ Uniform distribution
// ✅ Deterministic
// ✅ Minimizes collisions

// Example Hash Function (Integers)
// index = key % tableSize;

// 4️⃣ Collision (Very Important)

// A collision happens when:

// hash(key1) == hash(key2)

// Example:

// hash(12) = 2
// hash(22) = 2

// 5️⃣ Collision Resolution Techniques
// 🔹 5.1 Separate Chaining ✅ (Most Common)

// Each bucket stores a linked list / vector.

// Index 2 → 12 → 22 → 42

// C++ Example:
// vector<int> hashTable[10];

// void insert(int key) {
//     int index = key % 10;
//     hashTable[index].push_back(key);
// }

// ✅ Easy
// ✅ Used in unordered_map internally

// 🔹 5.2 Open Addressing

// All keys are stored inside the table itself.

// 5.2.1 Linear Probing
// index = (hash(key) + i) % tableSize

// Problem: Clustering

// 5.2.2 Quadratic Probing
// index = (hash(key) + i²) % tableSize

// Better than linear probing

// 5.2.3 Double Hashing ✅ (Best Open Addressing)
// index = (h1(key) + i * h2(key)) % tableSize

// Reduces clustering a lot

// 6️⃣ Load Factor (α)
// α = number_of_elements / table_size

// α < 0.7 → good performance

// High α → more collisions

// 7️⃣ Rehashing

// When load factor increases:

// Create a larger table

// Recompute hash for all keys

// Insert again

// ✅ Costly but improves performance

// 8️⃣ Hashing in STL (C++)
// 🔹 unordered_map
// unordered_map<int, int> mp;
// mp[10] = 1;
// mp[20] = 2;

// Average Time: O(1)

// Worst Case: O(n)

// Uses hashing + chaining

// 🔹 unordered_set
// unordered_set<int> s;
// s.insert(10);

// Stores unique keys

// 9️⃣ Problems Solved Using Hashing

// ✅ Two Sum
// ✅ Frequency Count
// ✅ Subarray Sum = K
// ✅ Longest Consecutive Sequence
// ✅ Anagram Checking

// Example: Frequency counting

// unordered_map<int,int> freq;
// for(int x : arr) freq[x]++;

// 🔟 Hashing Strings (Advanced)
// Polynomial Rolling Hash

// Used in:
// ✅ String matching
// ✅ Rabin–Karp algorithm

// Formula:

// hash(s) = Σ (s[i] * p^i) % mod

// Example:

// const int p = 31;
// const int mod = 1e9+7;

// 1️⃣1️⃣ Custom Hash Function (Advanced)

// Used to avoid hacking / collisions.

// struct customHash {
//     size_t operator()(int x) const {
//         return x ^ (x << 16);
//     }
// };

// unordered_map<int,int,customHash> mp;

// 1️⃣2️⃣ Hashing in Competitive Programming
// Problems where hashing is perfect:

// ✅ Detect duplicates
// ✅ Count frequencies
// ✅ Check existence in O(1)
// ✅ Fast lookups

// ⚠️ Worst-case O(n) if collisions are forced

// 1️⃣3️⃣ Comparison with Other DS
// Structure	Search	Insert	Order
// Array	O(n)	O(n)	Yes
// BST	O(log n)	O(log n)	Yes
// Hash Table	O(1) avg	O(1) avg	No
// 1️⃣4️⃣ Common Mistakes ❌

// ❌ Poor hash function
// ❌ Ignoring collisions
// ❌ High load factor
// ❌ Assuming O(1) always
