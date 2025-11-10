// test.cpp - simple demo of a do-while loop
#include <iostream>
#include <limits>

int main() {
    long long sum = 0;
    int value = 0;
    int count = 0;

    std::cout << "Enter integers to sum (enter 0 to quit).\n";

    do {
        std::cout << "Value: ";
        if (!(std::cin >> value)) {
            // handle non-integer input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input, try again.\n";
            value = 0; // keep loop going
            continue;
        }
        if (value != 0) {
            sum += value;
            ++count;
        }
    } while (value != 0);

    std::cout << "You entered " << count << " non-zero value(s). Sum = " << sum << '\n';
    return 0;
}