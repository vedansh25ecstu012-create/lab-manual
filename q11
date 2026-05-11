#include <iostream>
using namespace std;

int main() {
    int quantity;
    float price_per_item, total, discount = 0;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter price per item: ";
    cin >> price_per_item;

    total = quantity * price_per_item;

    if (quantity > 1000) {
        discount = total * 0.10;  
    }

    float final_amount = total - discount;

    cout << "Total amount before discount: " << total << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final amount to pay: " << final_amount << endl;

    return 0;
}
