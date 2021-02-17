#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 2, m = 2;
    vector<vector<int>> indices = {{1, 1}, {0, 0}}, matrix(n , vector<int> (m, 0));

    for (int i = 0; i < indices.size(); i++) {
        for (int j = 0; j < m; j++) {
            matrix[indices[i][0]][j]++;
        }
        for (int j = 0; j < n; j++) {
            matrix[j][indices[i][1]]++;
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2) count++;
        }
    }

    cout << count;

    return 0;
}