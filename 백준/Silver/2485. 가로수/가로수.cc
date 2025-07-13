#include <bits/stdc++.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int num;
    std::cin >> num;

    std::vector<int> answer;
    
    for(int i = 0; i < num; i++) {
        int one;
        std::cin >> one;
        answer.push_back(one);
    }

    std::sort(answer.begin(), answer.end());
    
     int gap = answer[1] - answer[0];
    for (int i = 2; i < num; i++) {
        gap = gcd(gap, answer[i] - answer[i - 1]);
    }
    
    int total = (answer.back() - answer.front()) / gap + 1;

    std::cout << total - num << "\n";
    return 0;
}
