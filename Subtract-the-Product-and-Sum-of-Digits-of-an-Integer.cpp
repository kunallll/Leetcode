#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, pro = 1;
    cin >> n;

    while (n) {
        sum += (n % 10);
        pro *= (n % 10);

        n /= 10;
    }

    cout << sum << " " << pro;
}