#include <iostream>
#include <string>

using namespace std;

int main() {
    string moves = "UDDUURLRLLRRUDUDLLRLURLRLRLUUDLULRULRLDDDUDDDDLRRDDRDRLRLURRLLRUDURULULRDRDLURLUDRRLRLDDLUUULUDUUUUL";
    int up = 0, left = 0;
    for (int i = 0; i < moves.size(); i++) {
        if (moves[i] == 'U') up++;
        else if (moves[i] == 'R') left--;
        else if (moves[i] == 'D') up--;
        else if (moves[i] == 'L') left++;
    }

    if (left == 0 && up == 0) return true;
    else return false;

    return 0;
}