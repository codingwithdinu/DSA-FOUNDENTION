#include <iostream>
#include <vector>
using namespace std;

class Heap{
public:
    vector<int> vec;
    
    void push(int val){
        vec.push_back(val);

        int childIdx = vec.size()-1;
        int parIdx = (childIdx-1)/2;

        while(parIdx>=0 && vec[childIdx]>vec[parIdx]){
            swap(vec[childIdx] , vec[parIdx]);
            childIdx = parIdx;
            parIdx = (childIdx-1)/2;
        }
    }

    void heapify(int i){
        if(i>=vec.size()) return;

        int l = 2*i+1;
        int r = 2*i+2;

        int maxidx = i;

        if(l<vec.size() && vec[l] > vec[maxidx]){
            maxidx = l;
        }
        if(r<vec.size() && vec[r] > vec[maxidx]){
            maxidx = r;
        }

        swap(vec[i] , vec[maxidx]);
        if(maxidx != i){
            heapify(maxidx);
        }
    }

    void pop(){
        swap(vec[0] , vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);
    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size() == 0;
    }
};


int main(){
    Heap heap;
    heap.push(9);
    heap.push(90);
    heap.push(10);
    heap.push(40);
    heap.push(60);
    heap.pop();

    for(int val : heap.vec){
        cout << val << " ";
    }

    cout<<heap.top();
    
}