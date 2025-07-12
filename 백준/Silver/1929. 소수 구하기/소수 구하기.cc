#include <bits/stdc++.h>

int main()
{
    int one, two;
    std::cin >> one >> two;

    std::set<int> answer;
    for (int i = one; i <= two; i++) {
        answer.insert(i);
    }

    answer.erase(1);

    int limit = std::sqrt(two);
    for (int i = 2; i <= limit; i++) {
        for (int j = std::max(i * i, (one + i - 1) / i * i); j <= two; j += i) {
            answer.erase(j);
        }
    }
    for (int num : answer) {
        std::cout << num << "\n";
    }

    return 0;
}
