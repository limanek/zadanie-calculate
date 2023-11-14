#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int answer;
    if(command == "add") {
        return std::to_string(first + second);
    } else if(command == "subtract") {
       return std::to_string(first - second);
    } else if(command == "multiply") {
        return std::to_string(first * second);
    } else if(command == "divide") {
        if(second == 0) {
            return "Cannot divide by zero";
        } else {
            return std::to_string(first / second);
        }
    } else {
        return "Invalid data";
    }
}

void start() {
    std::string ret = calculate("divide",2,0);
    std::cout << ret << std::endl;
}

int main() {
    start();
    return 0;
}