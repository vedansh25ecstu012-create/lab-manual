#include <iostream>
using namespace std;

int main() {
    const int students = 3;
    const int subjects = 5;

    int marks[students][subjects];

    cout << "Enter marks for 3 students (5 subjects each):\n";
    for (int i = 0; i < students; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        for (int j = 0; j < subjects; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    cout << "\nMarks in 2nd subject of 1st student: "
         << marks[0][1] << endl;

    cout << "Marks in 5th subject of 3rd student: "
         << marks[2][4] << endl;

    return 0;
}
