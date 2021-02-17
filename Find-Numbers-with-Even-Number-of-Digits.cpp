#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums {12, 345, 2, 6, 7896};
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        int size = floor(log10(nums[i]) + 1);
        if (size % 2 == 0) count++;
    }

    cout << count;
}