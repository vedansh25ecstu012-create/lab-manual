#include <iostream>
using namespace std;

int main() {
    const int DAYS = 30;
    float temp[DAYS];

    cout << "Enter temperature for 30 days:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temp[i];
    }

    float minTemp = temp[0];
    for (int i = 1; i < DAYS; i++) {
        if (temp[i] < minTemp) {
            minTemp = temp[i];
        }
    }

    cout << "\nMinimum temperature of the month: " << minTemp << "°C" << endl;

    return 0;
}
