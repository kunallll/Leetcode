#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> set = {1, 2, 2, 4}, set_mis;

    sort(set.begin(), set.end());

    for (int i = 0; i < set.size() - 1; i++) {
        if (set[i] == set[i + 1]) {
            set_mis.push_back(set[i]);
            break;
        }
    }

    for (int i = 0; i < set.size(); i++) {
        
    }
}