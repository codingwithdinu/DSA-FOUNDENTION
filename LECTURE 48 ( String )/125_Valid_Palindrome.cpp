#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for(int i=0;i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i]+32;
            }else if(s[i]>='a'&& s[i]<='z'){
                st.push_back([i]);
            }
        }
        
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

int main(){
    Solution obj;
    string s = "race a car";
    cout<<obj.isPalindrome(s);
}