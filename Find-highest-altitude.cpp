#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> gains = {-4,-3,-2,-1,4,3,2};
    int altitudes = 0;

    int maxA = 0;

    for (int i = 0; i < gains.size(); i++) {
        altitudes += gains[i];
        if (maxA < altitudes) maxA = altitudes;
    }

    cout << maxA;

    return 0;
}