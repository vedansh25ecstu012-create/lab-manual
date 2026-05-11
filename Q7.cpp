#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Enter three scores: ";
    cin >> s1 >> s2 >> s3;

    if (s1 > s2 && s1 > s3) {
        cout << "Player 1 is the winner!" << endl;
    } else if (s2 > s1 && s2 > s3) {
        cout << "Player 2 is the winner!" << endl;
    } else if (s3 > s1 && s3 > s2) {
        cout << "Player 3 is the winner!" << endl;
    } else {
        cout << "It's a tie for the lead!" << endl;
    }

    return 0;
}
