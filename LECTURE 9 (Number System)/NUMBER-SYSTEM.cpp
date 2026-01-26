// Represent a number using different forms using 
// different base vaule


// In decimal number system base value is 10 (1-9)digits
// ex:- 23= 2x10^1 + 3x10^0
// 23 = 20 + 3 = 23



// In Binary Number system base value is 2 (0,1)
// ex:- 1011 = 1x2^3 + 0x2^2 + 1x2^1 + 1x2^0
// 1011 = 8+0+2+1 = 11 in decimal no. system



// Conversion of binary to decimal
// 
// 1010101 =          1       0         1        0         1        0       1           
//                  1x2^6 + 0x2^5  +  1x2^4  + 0x2^3  +  1x2^2 + 0x2^1  + 1x2^0
//                    64  +  0  +      16  +     0  +      4 +    0  +      1     =   85
// 

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a binary number:";
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int lastdigit = n%10;
        ans =ans + (lastdigit*power);
        power=power*2;
        n=n/10;
    }
    cout<<ans<<endl;




// Conversion of decimal to binary  
// 
// 23 
// 23/2 = 11 and remainder = 1
// 11/2 = 5 and remainder = 1
// 5/2 = 2 and remainder = 1
// 2/2 = 1 and remainder = 0
//binary of 23 = 10111 


    int m;
    cout<<"enter decimal number:";
    cin>>m;
    int result=0;
    int powers=1;
   while(m>0){
        int paritydigit = m%2;
        result =result + (paritydigit*powers);
        powers=powers*10;
        m=m/2;
    } 
    cout<<result<<endl;


}