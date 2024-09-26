#include <iostream>
#include <string>
#include "calcoper.h"

int main() {
    std::string input;
    int x, y;
    char c;
    while (true) {
        std::cout << "Enter two numbers and an operator (+, -, *, /) or 'q' to quit: ";
        std::cin >> input;

        if (input == "q") {
            break;
        }

        std::cin >> x >> y >> c;

        if (c == '+') {
            Add add;
            add.setValue(x, y);
            std::cout << "Result: " << add.calculate() << std::endl;
        } else if (c == '-') {
            Sub sub;
            sub.setValue(x, y);
            std::cout << "Result: " << sub.calculate() << std::endl;
        } else if (c == '*') {
            Mul mul;
            mul.setValue(x, y);
            std::cout << "Result: " << mul.calculate() << std::endl;
        } else if (c == '/') {
            Div div;
            div.setValue(x, y);
            std::cout << "Result: " << div.calculate() << std::endl;
        } else {
            std::cout << "Invalid operator" << std::endl;
            break;
        }
    }

    return 0;
}
