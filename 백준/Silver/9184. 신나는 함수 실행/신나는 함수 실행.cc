#include <iostream>

int dp[21][21][21]; // 0 ~ 20

int check(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;

    if (a > 20 || b > 20 || c > 20)
        return check(20, 20, 20);

    if (dp[a][b][c] != 0)
        return dp[a][b][c];

    if (a < b && b < c)
        dp[a][b][c] = check(a, b, c - 1) + check(a, b - 1, c - 1) - check(a, b - 1, c);
    else
        dp[a][b][c] = check(a - 1, b, c) + check(a - 1, b - 1, c) + check(a - 1, b, c - 1) - check(a - 1, b - 1, c - 1);

    return dp[a][b][c];
}

int main() {
    while (true) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a == -1 && b == -1 && c == -1)
            break;

        std::cout << "w(" << a << ", " << b << ", " << c << ") = " << check(a, b, c) << "\n";
    }

    return 0;
}
