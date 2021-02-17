#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int> > matrix {{1, 10, 4, 2}, {9, 3, 8, 7}, {15,16,17,12}};
    vector<int> minV;

    for (int i = 0; i < matrix.size(); i++) {
        int min = *min_element(matrix[i].begin(), matrix[i].end());

        for (int j = 0; j < matrix[i].size(); j++) {
            if (min < matrix[i][j]) break;
        }
        cout << min << " ";
    }

    for (int i = 0; i < minV.size(); i++) cout << minV[i] << " ";
}

/*
3  7   8
9  11 13
15 16 17
*/