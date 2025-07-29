#include <bits/stdc++.h>

int main() {
    int n;
    long long num;
    std::cin >> num >> n;

    std::string answer;
    while (num > 0) {
        int r = num % n;
        if (r < 10)
            answer += (char)('0' + r);
        else
            answer += (char)('A' + (r - 10));
        num /= n;
    }

    std::reverse(answer.begin(), answer.end());
    std::cout << answer << "\n";

    return 0;
}
