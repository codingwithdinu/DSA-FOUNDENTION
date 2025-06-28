#include <iostream>
using namespace std;
int main(){
// category             operators               associativity

// Postfix              ++  --                   Left to right            
// Unary                + - ! ~ ++ --            right to left            
// Multiplicative       * / %                    Left to right            
// Additive             + -                      Left to right            
// Shift                << >>                    Left to right            
// Relational           < <= > >=                Left to right            
// Equality             == !=                    Left to right            
// Bitwise AND           &                       Left to right            
// Bitwise XOR           ^                       Left to right            
// Bitwise OR            |                       Left to right            
// Logical AND           &&                      Left to right            
// Logical OR            ||                      Left to right            
// Conditional            ?                      right to left            


    cout<<(4+2+"pqr")<<endl;

    cout<<("pqr"+4+2)<<endl;

    return 0;
}

