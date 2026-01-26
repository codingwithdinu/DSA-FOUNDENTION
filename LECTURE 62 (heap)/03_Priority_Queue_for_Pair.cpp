#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Compare{
    // bool operator()(pair<string,int> &p1 , pair<string,int>&p2){
    //     return p1.second > p2.second;  //minheap based on marks
    // }

    // bool operator()(pair<string,int> &p1 , pair<string,int>&p2){
    //     return p1.first > p2.first;   //minheap based on name
    // }

    // bool operator()(pair<string,int> &p1 , pair<string,int>&p2){
    //     return p1.second < p2.second;    //maxheap based on marks
    // }

    bool operator()(pair<string,int> &p1 , pair<string,int>&p2){
        return p1.first < p2.first;      //maxheap based on name
    }
};

int main(){
    priority_queue<pair<string,int>,vector<pair<string,int>>,Compare>pq;

    pq.push(make_pair("aman",500));
    pq.push(make_pair("bhumika",1000));
    pq.push(make_pair("chetan",100));

    while(!pq.empty()){
        cout<<pq.top().first<<","<<pq.top().second<<endl;
        pq.pop();
    }
}