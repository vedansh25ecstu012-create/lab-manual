#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Enter input string: ";
    getline(cin, s);

    string cleaned = "";
    int i = 0;

    // 1. Removeing spaces
    while (i < s.length() && s[i] == ' ') i++;

    bool spaceSeen = false;

    for (; i < s.length(); i++) {
        if (s[i] != ' ') {
            cleaned += s[i];
            spaceSeen = false;
        } 
        else if (!spaceSeen) {
            cleaned += ' ';
            spaceSeen = true;
        }
    }

    if (!cleaned.empty() && cleaned.back() == ' ') {
        cleaned.pop_back();
    }

    // 2. Converting to sentence case
    bool newWord = true;
    for (int i = 0; i < cleaned.length(); i++) {
        if (isalpha(cleaned[i])) {
            if (newWord) {
                cleaned[i] = toupper(cleaned[i]);
                newWord = false;
            } else {
                cleaned[i] = tolower(cleaned[i]);
            }
        } else if (cleaned[i] == ' ') {
            newWord = true;
        }
    }

    // 3. Counting words, digits, special characters & validation
    int words = 0, digits = 0, special = 0;
    bool valid = true;

    for (int i = 0; i < cleaned.length(); i++) {
        char ch = cleaned[i];

        if (isdigit(ch)) {
            digits++;
        }
        else if (isalpha(ch)) {
        }
        else if (ch == ' ') {
        }
        else {
            special++;
            valid = false;
        }
    }

    if (!cleaned.empty()) {
        words = 1;
        for (int i = 0; i < cleaned.length(); i++) {
            if (cleaned[i] == ' ') words++;
        }
    }

    // 4. Validation check
    for (int i = 0; i < cleaned.length(); i++) {
        if (!isalnum(cleaned[i]) && cleaned[i] != ' ') {
            valid = false;
            break;
        }
    }

    cout << "\nNormalized String: " << cleaned << endl;
    cout << "Total Words: " << words << endl;
    cout << "Total Digits: " << digits << endl;
    cout << "Total Special Characters: " << special << endl;

    if (valid) {
        cout << "Validation: VALID string" << endl;
    } else {
        cout << "Validation: INVALID string (contains forbidden characters)" << endl;
    }

    return 0;
}
