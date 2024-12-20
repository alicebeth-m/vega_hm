#include <iostream>
#include "include/mathlib.h"

int main() {
    int choice;
    std::cout << "=== MathLib ===\n";
    std::cout << "1. Calculate factorial\n";
    std::cout << "2. Check if a number is prime\n";
    std::cout << "Choose an option (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        int number;
        std::cout << "Enter a number to calculate its factorial: ";
        std::cin >> number;
        int result = factorial(number);
        if (result == -1) {
            std::cout << "Error: Factorial of a negative number is undefined.\n";
        } else {
            std::cout << "The factorial of " << number << " is " << result << ".\n";
        }
    } else if (choice == 2) {
        int number;
        std::cout << "Enter a number to check if it's prime: ";
        std::cin >> number;
        if (is_prime(number)) {
            std::cout << "The number " << number << " is prime.\n";
        } else {
            std::cout << "The number " << number << " is not prime.\n";
        }
    } else {
        std::cout << "Invalid choice. Please select 1 or 2.\n";
    }

    return 0;
}
