#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter password: ";
    cin >> password;

    bool hasUpper = false, hasLower = false;
    bool hasDigit = false, hasSpecial = false;

    string specialChars = "@#$%!&*";

    for (char ch : password) {
        if (ch >= 'A' && ch <= 'Z')
            hasUpper = true;
        else if (ch >= 'a' && ch <= 'z')
            hasLower = true;
        else if (ch >= '0' && ch <= '9')
            hasDigit = true;
        else if (specialChars.find(ch) != string::npos)
            hasSpecial = true;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        cout << "Password is Strong" << endl;
    else
        cout << "Password is Weak" << endl;

    return 0;
}
