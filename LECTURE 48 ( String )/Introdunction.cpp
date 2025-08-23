// In C++, strings are sequences of characters that are used to store words and text.
//  They are also used to store data, such as numbers and other types of information in the form of text.
//  Strings are provided by <string> header file in the form of std::string class.
// string str_name;

// Initializing a String
// Initializing means assigning some initial value to the string. 
// This can be done by using assignment operator and the text enclosed inside " " double quotes.
// string str = "Some Text here";


// Printing a String
// A string can be referred using its name anywhere in the scope once it is declared. 
// For example, the below example prints string using cout:
#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;
int main(){

    string str = "Codingwithdinu";
    cout<<str<<endl;

    // input from user
    string str1;
    cin>>str1; // input : coding with dinu
    cout<<str1; // output : coding

    string str2;
    getline(cin , str2);  // input : coding with dinu
    cout<<str2<<endl;;           // output :  coding with dinu


    // reverse() function
    reverse(str.begin() , str.end());
    cout<<str<<endl; // output : unidhtiwgnidoC

    // substr()
    string str4 = "codingwithdinu";
    cout<<str4.substr(0,3)<<endl;
    cout<<str4.substr(1)<<endl;
    cout<<str4.substr(3)<<endl;
}