#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(int i=0;i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                st.push_back(s[i]+32);
            }else if(s[i]>='a'&& s[i]<='z'){
                st.push_back(s[i]);
            }
        }

        if(st.length() <= 1 || (st.empty())) return false;

        
        int l = 0;
        int r = st.length()-1;
        while(l<r){
            if(st[l]!=st[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};


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


int main(){
    Solution obj;
    string s = " ";
    cout<<obj.isPalindrome(s);
}