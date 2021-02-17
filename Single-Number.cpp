#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    vector<int> nums {2, 2, 3, 2}, numsO;

    unordered_map<int, int> numsMap;
    for (auto x: nums) {
        numsMap[x]++;
    }

    for (auto i: numsMap) {
        if (i.second == 1) numsO.push_back(i.first);
    }

    return 0;
}