#include <bits/stdc++.h>

std::vector<int> answer;

int main()
{
    int num, a = 0;
    std::cin >> num;
    std::map<int, int> freq;
    
    for (int i = 0; i < num; i++) {
        int n;
        std::cin >> n;
        a += n;
        answer.push_back(n);
        freq[n]++;
    }

    std::sort(answer.begin(), answer.end());

    int max_freq = 0;
    std::vector<int> modes;
    for (auto &[value, count] : freq) {
        if (count > max_freq) {
            max_freq = count;
            modes.clear();
            modes.push_back(value);
        } else if (count == max_freq) {
            modes.push_back(value);
        }
    }

    std::sort(modes.begin(), modes.end());

    std::cout << (int)std::round((double)a / num) << "\n";

    std::cout << answer[num / 2] << "\n";

    if (modes.size() > 1)
        std::cout << modes[1] << "\n";
    else
        std::cout << modes[0] << "\n";

    std::cout << answer.back() - answer.front() << "\n";

    return 0;
}
