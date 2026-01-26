#include <iostream>
#include <vector>
using namespace std;


// brute force approach 
int Profit(vector<int> &price){
    int maxProfit = 0;

    for(int i=0; i<price.size(); i++){
        for(int j=i+1; j<price.size(); j++){
            int profit = price[j] - price[i];
            maxProfit = max(maxProfit , profit);
        }
    }

    return maxProfit;
}

// Optimial approach Dynamic Programming Thinking31
int MaxProfit(vector<int> &price){

    int maxprofit = 0;
    int bestbuy = price[0];

    for(int i=0; i<price.size(); i++){
        if(price[i] > bestbuy){
            maxprofit = max(maxprofit,price[i]-bestbuy);
        }

        bestbuy = min(bestbuy , price[i]);
    }

    return maxprofit;
}




int main(){
    vector<int> price = {7,1,5,3,6,4};
    cout<<MaxProfit(price);
}