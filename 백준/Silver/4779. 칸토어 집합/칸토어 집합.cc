#include <bits/stdc++.h>
int checksize = 0;

void replace(std::vector<bool>& answer, int start, int end) {
    int len = end - start + 1;
    if (len < 3) return;

    int one_third = len / 3;
    
    for (int i = start + one_third; i < start + 2 * one_third; i++) {
        answer[i] = false;
    }

    replace(answer, start, start + one_third - 1);
    replace(answer, start + 2 * one_third, end);
}

int main()
{
    int num;
    while (std::cin >> num) {
        size_t size = static_cast<size_t>(pow(3, num));
        checksize = size;
        std::vector<bool> answer(size, true);

        replace(answer, 0, size - 1);

        for (const auto& a : answer) {
            if (a) {
                std::cout << "-";
            } else {
                std::cout << " ";
            }
        }

        std::cout << "\n";
    }

    return 0;
}
