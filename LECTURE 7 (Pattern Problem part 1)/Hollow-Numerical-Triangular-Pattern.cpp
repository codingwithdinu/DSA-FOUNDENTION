#include <iostream>
using namespace std;
int main(){

    //    1
    //   2 2
    //  3   3
    // 4444444

    for(int i=1; i<=4; i++){
        for(int j=1; j<=4-i; j++){
            cout<<" ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            // First row: print 1
            // Second row: print 2 at start and end only
            // Third row: print 3 at start and end only
            // Fourth row: print all 4s
            if (i == 1 || i == 4 || j == 1 || j == 2 * i - 1)
                cout << i;
            else
                cout << " ";
        }
        cout<<endl;
    }
}
