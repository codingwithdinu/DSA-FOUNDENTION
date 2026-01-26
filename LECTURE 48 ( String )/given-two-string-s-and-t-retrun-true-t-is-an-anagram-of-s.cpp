// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Constraints: String s and t will only contain lowercase alphabetical characters.
// Input 1: s = "anagram", t = "nagaram"
// Output 1: yes
// Input 2: s = "bank", t = "atm"
// Output 2: no

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsAnagram(string s1 , string s2){

    vector<int> freq(26,0);

    if(s1.length()!=s2.length()) return false;

    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }
    }

    return true;
}
int main(){

    string s1 = "anagram";
    string s2 = "nagaram";
    cout<<IsAnagram(s1, s2)<<endl;
}