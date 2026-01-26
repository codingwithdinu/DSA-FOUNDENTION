#include <iostream> 
using namespace std;

int digitSum(int n){
    if(n>=0 && n<=9) return n;
    return digitSum(n/10) + n%10;
}
int main(){
    int result = digitSum(12345);
    cout<<result<<endl;
    return 0;
}



