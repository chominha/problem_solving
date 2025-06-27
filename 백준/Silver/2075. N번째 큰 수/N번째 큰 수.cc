#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int num;
    std::cin >> num;

    std::priority_queue<int, std::vector<int>, std::greater<int>> sortlist;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            int one;
            std::cin >> one;

            if (sortlist.size() < num) {
                sortlist.push(one);
            } else if (one > sortlist.top()) {
                sortlist.pop();
                sortlist.push(one);
            }
        }
    }

    std::cout << sortlist.top() << "\n";

    return 0;
}
