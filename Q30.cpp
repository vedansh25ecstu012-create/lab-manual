Q30) #include <iostream>
using namespace std;

int main() {
    const int N = 10;
    float salary[N];
    float total = 0;

    cout << "Enter salary of 10 employees:\n";
    for (int i = 0; i < N; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];
    }

    float average = total / N;

    cout << "\nTotal salary of all employees: " << total << endl;
    cout << "Average salary: " << average << endl;

    return 0;
}
