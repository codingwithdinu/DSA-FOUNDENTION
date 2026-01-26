#include <iostream>
using namespace std;
int main(){

    // Switch case
    // Syntax :
    // switch (expression){
    //    case x:
    //       // code
    //       break;
    //    case y:
    //       // code
    //       break;
    //    default:
    //       // code
    // }

    // write a program to print the day based on the day number




    int day;
    cout<<"enter number (1-7):";
    cin>>day;

    switch(day){
        case 1:
        cout<<"MONDAY"<<endl;
        break;
        case 2:
        cout<<"TUESDAY"<<endl;
        break;
        case 3:
        cout<<"WEDNESDADY"<<endl;
        break;
        case 4:
        cout<<"THURSDAY"<<endl;
        break;
        case 5:
        cout<<"FRIDAY"<<endl;
        break;
        case 6:
        cout<<"SATURDAY"<<endl;
        break;
        case 7:
        cout<<"SUNDAY"<<endl;
        break;

        default:
        cout<<"ERROR"<<endl;
    }



    // write program to identify vowels

    char character;
    cout<<"entre alphabet :";
    cin>>character;

    switch(character){
        case 'a':
        cout<<"a is a vowel"<<endl;
        break;
        case 'e':
        cout<<"o is a vowel"<<endl;
        break;
        case 'i':
        cout<<"i is a vowel"<<endl;
        break;
        case 'o':
        cout<<"a is a vowel"<<endl;
        break;
        case 'u':
        cout<<"a is a vowel"<<endl;
        break;
        default:
        cout<<"consonants"<<endl;
        break;
    }

}