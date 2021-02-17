#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> prices {8, 4, 6, 2, 3};

    vector<int> discountedPrices;
    int j = 0, flag = 0;
        
    for (int i = 0; i < prices.size(); i++) {
        flag = 0;
        for (int j = i + 1; j < prices.size(); j++) {
            if (prices[j] <= prices[i]) {
                discountedPrices.push_back(prices[i] - prices[j]);
                break;
                flag = 1;
            }
        }
        if (flag == 0) discountedPrices.push_back(prices[i]);
    }

    for (int i = 0; i < discountedPrices.size(); i++) {
        cout << discountedPrices[i] << " ";
    }

    return 0;
}