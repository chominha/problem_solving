#include <bits/stdc++.h>

int main() {
    int one, two, three;
    while (true) {
        std::cin >> one >> two >> three;

        if (one == 0 && two == 0 && three == 0) {
            break;
        }

        if (one > two) std::swap(one, two);
        if (one > three) std::swap(one, three);
        if (two > three) std::swap(two, three);


        if (one + two <= three) {
            std::cout << "Invalid\n";
        }
        else if (one == two && two == three) {
            std::cout << "Equilateral\n";
        }
        else if (one == two || two == three || one == three) {
            std::cout << "Isosceles\n";
        }
        else {
            std::cout << "Scalene\n";
        }
    }

    return 0;
}
