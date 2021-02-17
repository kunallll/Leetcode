#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {0, 1, 2, 3, 4}, index = {0, 1, 2, 2, 1}, target;

    for (int i = 0; i < nums.size(); i++) {
        target[index[i]] = nums[i];
        for (int i = 0; i < target.size(); i++) {
            cout << target[i] << " "; 
        }
        cout << endl;
    }
    
    return 0;
}