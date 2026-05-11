#include <iostream>
using namespace std;

int main() {
    const int N = 5;
    int arr[N];
    int count = 0;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            count++;
        }
    }

    cout << "\nCount of numbers divisible by both 3 and 5: " << count << endl;

    return 0;
}
