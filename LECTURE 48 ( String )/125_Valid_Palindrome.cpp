#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* ================================
   Solution 1: Clean string approach
   ================================ */
class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                st.push_back(s[i] + 32);   // to lowercase
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                st.push_back(s[i]);
            }
        }

        int l = 0, r = st.length() - 1;
        while (l < r) {
            if (st[l] != st[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};

/* ==================================
   Solution 2: Optimized two-pointer
   ================================== */
class SolutionA {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.length() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

int main() {
    string s = "race a car";

    Solution simple;
    SolutionA optimized;

    cout << "Simple approach: " << simple.isPalindrome(s) << endl;
    cout << "Optimized approach: " << optimized.isPalindrome(s) << endl;

    return 0;
}
