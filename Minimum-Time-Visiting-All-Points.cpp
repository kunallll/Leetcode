#include <iostream>
#include <vector>
#include <cmath>

using namespace std; 

int main() {
    vector<vector<int>> points = {{1,1},{3,4},{-1,0}};

    int time = 0 ;

    for (int i = 0; i < points.size() - 1; i++) {
        int x = abs(points[i][0] - points[i + 1][0]);
        int y = abs(points[i][1] - points[i + 1][1]);
        if (x > y) time += x;
        else time += y;
    }

    cout << time;
}