#include <iostream>

int main()
{
    int num;
    std::cin >> num;

    while (num--) {
        int N, M;
        std::cin >> N >> M;
        long long answer = 1;

        for (int i = 1; i <= N; i++) {
            answer = answer * (M - i + 1) / i;
        }

        std::cout << answer << "\n";
    }

    return 0;
}
