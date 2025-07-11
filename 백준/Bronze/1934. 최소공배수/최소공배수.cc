#include <iostream>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num;
    std::cin >> num;

    for(int i=0; i<num; i++) {
        int a, b;
        std::cin >> a >> b;
        std::cout << lcm(a, b) <<"\n";
    }

    return 0;
}
