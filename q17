#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n != 0)
        cout << n << " is a Perfect number." << endl;
    else
        cout << n << " is NOT a Perfect number." << endl;

    int temp = n, digits = 0;
    
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int armstrongSum = 0;

    while (temp != 0) {
        int digit = temp % 10;
        armstrongSum += pow(digit, digits);
        temp /= 10;
    }

    if (armstrongSum == n)
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;

    return 0;
}
