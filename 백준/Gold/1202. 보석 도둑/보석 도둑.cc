#include <bits/stdc++.h>


int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int num1, num2;
    std::cin >> num1 >> num2;

    std::vector<std::pair<int,int>> jewel(num1); // (무게, 가격)
    std::vector<int> bag(num2);

    for (int i = 0; i < num1; i++) {
        int m, v;
        std::cin >> m >> v;
        jewel[i] = {m, v};
    }

    for (int i = 0; i < num2; i++) {
        std::cin >> bag[i];
    }

    sort(jewel.begin(), jewel.end());
    sort(bag.begin(), bag.end());

    std::priority_queue<int> pq; // 가격 기준 최대 힙
    long long answer = 0;
    int j = 0;

    for (int i = 0; i < num2; i++) {
        while (j < num1 && jewel[j].first <= bag[i]) {
            pq.push(jewel[j].second);
            j++;
        }
        if (!pq.empty()) {
            answer += pq.top();
            pq.pop();
        }
    }

    std::cout << answer;
    return 0;
}
