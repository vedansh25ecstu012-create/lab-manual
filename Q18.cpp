#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    
    cout << "Enter ID: ";
    cin >> id;

    bool isPalindrome = true;
    int n = id.length();

    for (int i = 0; i < n / 2; i++) {
        if (id[i] != id[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "ID is a Palindrome." << endl;
    else
        cout << "ID is NOT a Palindrome." << endl;

    return 0;
}
