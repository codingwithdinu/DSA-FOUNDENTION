// An encoded string (s) is given, and the task is to decode it.
//  The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.
// Note: The occurrence of a single string is less than 1000.
// Input: s = 1[b]
// Output: b
// Input: s = 3[b2[ca]]
// Output: bcacabcacabcaca

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string decodedString(string s){
    string result = "";

    //travesing the decoded string
    for(int i=0; i<s.length(); i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //extract str from result
            string str = "";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }
            // reversing the str
            reverse(str.begin() , str.end());

            //remove last char from result [
            result.pop_back();

            //extract num from result
            string num = "";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            // reversing the num
            reverse(num.begin() , num.end());

            //convert string into int
            int int_num = stoi(num);

            //inserting str in result int_num times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }

    return result;
}

int main(){
    string s = "3[b2[ca]]";
    cout<<decodedString(s)<<endl;
}