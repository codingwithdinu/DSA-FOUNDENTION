#include <iostream>
#include <vector>
using namespace std;

int GasStation(vector<int> &gas , vector<int> &cost){
    int totGas = 0 , totcost = 0;
    int start = 0 , currGas = 0;
    for(int i=0; i<gas.size(); i++){
        totGas += gas[i];
        totcost += cost[i];
        currGas += (gas[i] - cost[i]);
        if(currGas<0){
            start = i+1;
            currGas = 0;
        }
    }

    return totGas<totcost ? -1 : start;
}


int main(){
    vector<int> gas = {1,2,3,4,5,9};
    vector<int> cost = {3,4,1,10,1};
    cout<<GasStation(gas,cost);
}