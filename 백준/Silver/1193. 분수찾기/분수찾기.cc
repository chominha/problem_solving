#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int line = 1; 
    int sum = 0;

    while (sum + line < num) {
        sum += line;
        line++;
    }

    int offset = num - sum; 

    int one, two;
    if (line % 2 == 0) {
        one = offset;
        two = line - offset + 1;
    } else {
        one = line - offset + 1;
        two = offset;
    }

    std::cout << one << "/" << two;
    return 0;
}
