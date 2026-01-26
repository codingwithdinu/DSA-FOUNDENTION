#include <iostream>
using namespace std;

bool f(int num, int *temp){
    if(num>=0 and num<=9){
        int lastdigittemp = (*temp)%10;
        (*temp)/=10;
        return (num == lastdigittemp);
    }
    bool result = (f(num/10 , temp) and (num%10)==((*temp)%10));
    (*temp)/=10;
    return result;
}
int main(){
    int num = 12321;
    int anothernum = num;
    int *temp = &anothernum;
    cout<<f(num,temp);
}