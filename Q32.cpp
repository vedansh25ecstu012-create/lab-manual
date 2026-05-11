#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int arr[N];

    cout << "Enter 5 stock values:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < N; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "\nLargest value: " << largest << endl;

    if (secondLargest == -1) {
        cout << "Second largest value not found (all values may be same)" << endl;
    } else {
        cout << "Second largest value: " << secondLargest << endl;
    }

    return 0;
}
