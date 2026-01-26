#include <iostream>
using namespace std;
int main(){

    // for loop syntax:
    // for (init-statement; condition; final-expression){...code
    // ............}


    for(int i=1; i<5; i++){
        cout<<i<<endl;
    }

    int n;
    cin>>n;
    int sum=0;
    for(int j=1; j<=n; j++){
        sum=sum+j;
    }
    cout<<sum<<endl;
    


    // Omitting parts of for loop 


    // 1. Omitting init statement
    int i=1;
    for(; i<5; i++){
        cout<<i;
    }
  

    // 2. Omitting condition statement

    for(int i=1;  ;  i++){
        // code should include my stopping condition
    }


    // 3. Omitting final-expression statement

    for(int i=1;  i<5;){
        cout<<i;
        i++;
    }




}