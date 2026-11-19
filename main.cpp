#include <iostream>
int main() {
    int choice;
    double temp;
    std::cout << "1. C to F  2. F to C: ";
    std::cin >> choice >> temp;
    if (choice == 1) std::cout << (temp * 9.0 / 5.0 + 32.0) << " F\n";
    else if (choice == 2) std::cout << ((temp - 32.0) * 5.0 / 9.0) << " C\n";
    else std::cout << "Invalid choice\n";
    return 0;
}
