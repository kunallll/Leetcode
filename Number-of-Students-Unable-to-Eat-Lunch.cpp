#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main () {
    vector<int> students {1, 1, 0, 0}, sandwiches {0, 1, 0, 1};
    queue<int> Q;
    for (int i = 0; i < students.size(); i++) {
        Q.push(students[i]);
    } 

    int i = 0, count = 0;

    while (!(Q.empty()) && count < Q.size()) {
        if (Q.front() == sandwiches[i]) {
            i++;
            count--;
        }
        else {
            cout << Q.front() << " " << count << endl;
            Q.push(Q.front());
            count++; 
        }
        Q.pop();
    }

    cout << endl << Q.size();

    return 0;
}