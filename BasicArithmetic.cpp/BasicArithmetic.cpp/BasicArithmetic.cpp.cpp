#include <iostream>

int main() {

    int num1 = 10;
    int num2 = 5;

    std::cout << "Addition: " << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
    std::cout << "Subtraction: " << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
    std::cout << "Multiplication: " << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;

    if (num2 != 0) {
        std::cout << "Division: " << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
        std::cout << "Modulo: " << num1 << " % " << num2 << " = " << num1 % num2 << std::endl;
    }
    else {
        std::cout << "Division and Modulo by zero is not allowed." << std::endl;
    }

    return 0;
}