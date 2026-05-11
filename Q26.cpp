#include <iostream>
#include <limits> // For INT_MIN

int main() {
    int stocks[5];
    
    std::cout << "Enter 5 stock values: ";
    for(int i = 0; i < 5; i++) {
        std::cin >> stocks[i];
    }

    // Initialize with the smallest possible integer
    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for(int i = 0; i < 5; i++) {
        if (stocks[i] > largest) {
            // If current is bigger than largest, the old largest 
            // becomes the second largest
            secondLargest = largest;
            largest = stocks[i];
        } else if (stocks[i] > secondLargest && stocks[i] != largest) {
            // If current is between largest and secondLargest
            secondLargest = stocks[i];
        }
    }

    std::cout << "--- Stock Results ---" << std::endl;
    std::cout << "Highest Value: " << largest << std::endl;
    
    if (secondLargest == std::numeric_limits<int>::min()) {
        std::cout << "Second Highest Value: N/A (all values are identical)" << std::endl;
    } else {
        std::cout << "Second Highest Value: " << secondLargest << std::endl;
    }

    return 0;
}
