#include <iostream>
using namespace std;



// brute force approach
double Power(double x , int n){

    if(n < 0){
        if(n == 0) return 1;
        return 1/x * Power(x,n+1);
    }
    if(n == 0) return 1;
    return x * Power(x,n-1);
}


// Binary exponentiation
double myPow(double x, int n){

    long binform = n;
    if(binform < 0){
        x = 1/x;
        binform = -binform;
    }

    double ans = 1;

    while(binform > 0){
        if(binform%2 == 1){
            ans = ans*x;
        }
        x = x*x;
        binform = binform/2;
    }
    return ans;
}


int main(){
    double x = 2;
    int n = -2;
    cout<<myPow(x,n);

}


