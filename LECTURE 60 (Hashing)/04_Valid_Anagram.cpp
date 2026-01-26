// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:

// Input: s = "anagram", t = "nagaram"

// Output: true

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool Anagram(string s , string t){
    unordered_map<char , int> freq;

    for(int i=0; i<s.size(); i++){
        if(freq.count(s[i])){
            freq[s[i]]++;
        }
        else{
            freq[s[i]] = 1;
        }
    }

    for(int i=0; i<t.size(); i++){
        if(freq.count(t[i])){
            freq[t[i]]--;
            if(freq[t[i]] == 0){
                freq.erase(t[i]);
            }
        }else{
            return false;
        }
    }

    return freq.size() == 0;
}

int main(){
    string s = "ababab";
    string t = "ababab";
    cout<<Anagram(s,t);
}