#include <iostream>

std::string calculate(const std::string& command, int first, int second) {
    std::cout << command;
    std::cout << first;
    std::cout << second;
}

void start() {
    calculate("add",2,2);
}

int main() {
    start();
    return 0;
}