#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<vector<int>> mat = {{0,0,1,0},{0,0,0,0},{0,0,0,0},{0,1,0,0}};
    vector<int> row (mat.size(), 0), colm (mat[0].size(), 0);
    int count = 0;

    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                row[i] += 1;
                colm[j] += 1;
            }
        }
    }

    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1 && row[i] == 1 && colm[j] == 1) count++;
        }
    }

    cout << count;
}