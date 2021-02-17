#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int h = 8, w = 5;
    vector<int> horizontalCuts = {5, 2, 6, 3}, verticalCuts = {1, 4};

    sort (horizontalCuts.begin(), horizontalCuts.end());
    sort (verticalCuts.begin(),verticalCuts.end());

    int l, b;

    if (verticalCuts.size() == 1) {
        if (w - verticalCuts[0] > verticalCuts[0]) l = w - verticalCuts[0];
        else l = verticalCuts[0];
    }
    else {
        l = (verticalCuts[verticalCuts.size() - 1] - verticalCuts[verticalCuts.size() - 2]);
    }
    
    if (horizontalCuts.size() == 1) {
        if (h - horizontalCuts[0] > horizontalCuts[0]) b = h - horizontalCuts[0];
        else b = horizontalCuts[0];
    }
    else {
        b = (horizontalCuts[horizontalCuts.size() - 1] - horizontalCuts[horizontalCuts.size() - 2]);
    }

    cout << l * b;

    return 0;
}