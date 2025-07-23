#include <iostream>
#include <vector>

int N, M;
std::vector<bool> visited;
std::vector<int> numlist;

void dfs(int depth) {
    if (depth == M) {
        for (int num : numlist) {
            std::cout << num << " ";
        }
        std::cout << "\n";
        return;
    }

    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            visited[i] = true;
            numlist.push_back(i);
            dfs(depth + 1);
            numlist.pop_back();
            visited[i] = false;
        }
    }
}

int main() {
    std::cin >> N >> M;
    visited.resize(N + 1, false);
    dfs(0);
    return 0;
}
