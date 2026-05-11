#include <iostream>
using namespace std;
int main() {
    int employees;
    float salary, bonus, netSalary;
    cout << "Enter number of employees: ";
    cin >> employees;
    for (int i = 1; i <= employees; i++) {
        cout << "\nEnter basic salary of employee " << i << ": ";
        cin >> salary;
        bonus = salary * 0.12;
        netSalary = salary + bonus;
        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
    return 0;
}
