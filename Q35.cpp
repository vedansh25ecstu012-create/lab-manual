#include <iostream>
using namespace std;

int main() {
    int a[3][3], transpose[3][3];

    cout << "Enter elements of 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "\nTranspose of matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
