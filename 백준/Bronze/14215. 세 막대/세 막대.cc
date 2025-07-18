#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    std::vector<int> sides = {a, b, c};
    std::sort(sides.begin(), sides.end());

    if (sides[0] + sides[1] <= sides[2]) {
        sides[2] = sides[0] + sides[1] - 1;
    }

    int perimeter = sides[0] + sides[1] + sides[2];
    std::cout << perimeter << std::endl;

    return 0;
}
