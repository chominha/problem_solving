/*
auto [index, move] = dq.front();
        dq.pop_front();
        answer.push_back(index);
*/
#include <iostream>
#include <deque>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int ballcount = 0;
    std::cin >> ballcount;

    std::deque<std::pair<int, int>> balldeque;
    std::vector<int> answer;

    for (int i = 0; i < ballcount; i++) {
        int num;
        std::cin >> num;
        balldeque.push_back(std::make_pair(i, num));
    }

    while (!balldeque.empty()) {
        int index = balldeque.front().first;
        int move = balldeque.front().second;
        balldeque.pop_front();

        answer.push_back(index+1);

        if (balldeque.empty()) break;

        if (move > 0) {
            for (int i = 0; i < move - 1; i++) {
                std::pair<int, int> temp = balldeque.front();
                balldeque.pop_front();
                balldeque.push_back(temp);
            }
        } else {
            for (int i = 0; i < -move; i++) {
                std::pair<int, int> temp = balldeque.back();
                balldeque.pop_back();
                balldeque.push_front(temp);
            }
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        std::cout << answer[i] << " ";
    }

    return 0;
}

/*
맨처음 1번 풍선 -> 1 + 1번 풍선 값 => 4 , 1번 pop -> 재정렬
4번 풍선 -> 4 + 4번 풍선 값 => 5
*/
