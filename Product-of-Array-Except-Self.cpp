#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums {1, 2, 3, 4}, numsL (nums.size()), numsR (nums.size());
    
    numsL[0] = 1;
    numsR[numsR.size() - 1] = 1;

    for (int i = 1; i < nums.size(); i++) {
        numsL[i] = numsL[i - 1] * nums[i - 1];
    }

    for (int i = nums.size() - 2; i >= 0; i--) {
        numsR[i] = numsR[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < nums.size(); i++) {
        nums[i] = numsL[i] * numsR[i];
    }

    return 0;
}