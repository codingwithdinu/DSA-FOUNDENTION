// #include <iostream>
// using namespace std;

// int Power(int p , int q){
//     if(q==0) return 1;
//     return p*Power(p,q-1);
// }
// int main(){
//     int result = Power(2,3);
//     cout<<result<<endl;
//     return 0;
// }


// Approach 2
#include <iostream>
using namespace std;

int Power(int p , int q){
    if(q==0) return 1;
    if(q%2==0){
        int result = Power(p,q/2);
        return result*result;
    }else{
        int result = Power(p,(q-1)/2);
        return p*result*result;
    }
}
int main(){
    int result = Power(2,3);
    cout<<result<<endl;
    return 0;
}