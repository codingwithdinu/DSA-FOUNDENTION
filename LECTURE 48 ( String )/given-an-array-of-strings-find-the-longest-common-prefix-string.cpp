// Given an array of strings. Write a program to find the longest common prefix string amongst an array of strings.
// Input: arr = ["flower", "flight", "flask"]
// Output: "fl"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LongestCommonPrefix(vector<string> &str){

    sort(str.begin() , str.end());

    string s1 = str[0];
    int i=0;
    string s2 = str[str.size()-1];
    int j=0;
    string ans="";

    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            ans+=s1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }

    return ans;
}
int main(){
    vector<string> str = {"flower" , "flight" , "flask"};
    cout<<LongestCommonPrefix(str)<<endl;
}


// Approach 2 
// keeping first string as constant and comparing it with all other strings
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string LongestCommonPrefix(vector<string> &str){

    string s1 = str[0];
    int ans_length = s1.size();

    for(int i=0; i<str.size(); i++){
        int j=0;
        while(i<s1.size() && j<str[i].size() && s1[j] == str[i][j]){
            j++;
        }
        ans_length = min(ans_length,j);
    }
    string ans = s1.substr(0,ans_length);
    return ans;
}
int main(){
    vector<string> str = {"flower" , "flight" , "flask"};
    cout<<LongestCommonPrefix(str)<<endl;
}