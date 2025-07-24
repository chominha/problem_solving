#include <iostream>
#include <vector>

int N, M;
std::vector<int> numlist;

void dfs(int depth, int start) {
    if (depth == M) {
        for (int num : numlist) {
            std::cout << num << " ";
        }
        std::cout << "\n";
        return;
    }

    for (int i = start; i <= N; ++i) {
        numlist.push_back(i);
        dfs(depth + 1, i + 1);  // 다음 수는 i+1부터 시작 → 중복 방지
        numlist.pop_back();
    }
}

int main()
{
    std::cin>>N>>M;
    dfs(0,1);
    return 0;
}