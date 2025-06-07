#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string str;
    int base;
    std::cin >> str >> base;

    int result = 0;
    for (char c : str) {
        int value;
        if (c >= '0' && c <= '9') value = c - '0';
        else value = c - 'A' + 10;  // A~Z => 10~35
        result = result * base + value;
    }

    std::cout << result << std::endl;
    return 0;
}
