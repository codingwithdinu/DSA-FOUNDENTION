// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     string str = "codingwithdinu";
//     for (int i = 0; i < str.size() - 1; i++)
//     {
//         for (int j = 0; j < str.size() - i - 1; j++)
//         {
//             if (str[j] > str[j + 1])
//             {
//                 swap(str[j], str[j + 1]);
//             }
//         }
//     }
//     cout<<str<<endl;
// }


// Count Sorting Algorithm

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string countSort(string str){
    vector<int> freq(26,0);

    for(int i=0; i<str.length(); i++){
        int index = str[i] - 'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }
    return str;
}

int main(){
    string str = "codingwithdinu";
    cout<<countSort(str)<<endl;
}