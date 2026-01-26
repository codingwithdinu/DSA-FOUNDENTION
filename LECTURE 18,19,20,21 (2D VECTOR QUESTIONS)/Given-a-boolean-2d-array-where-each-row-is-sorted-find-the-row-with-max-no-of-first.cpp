#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> maximumOnesRow(vector<vector<int>> &v) {
    int maxOnes = -1;
    int maxOnesRow = -1;
    
    for(int i = 0; i < v.size(); i++) {
        int count = 0;
        for(int j = 0; j < v[i].size(); j++) {
            if(v[i][j] == 1) {
                count++;
            }
        }
        if(count > maxOnes) {
            maxOnes = count;
            maxOnesRow = i;
        }    
    }
    return {maxOnesRow, maxOnes};
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> vec(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> vec[i][j];
        }
    }

    vector<int> result = maximumOnesRow(vec);
    cout << result[0] << " " << result[1] << endl;
}
