#include <iostream>
#include <vector>
#include <queue>
#include <algorithm> // std::sort 사용을 위함

std::vector<std::vector<int>> graph;
std::vector<bool> visited;

void DFS(int num) {
    visited[num] = true;
    std::cout << num << ' ';
    
    for (int i = 0; i < graph[num].size(); ++i) {
        int next = graph[num][i];
        if (!visited[next]) {
            DFS(next);
        }
    }
}

void BFS(int num) {
    std::queue<int> q;
    q.push(num);
    visited[num] = true;
    
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        
        std::cout << current << ' ';
        
        for (int i = 0; i < graph[current].size(); ++i) {
            int next = graph[current][i];
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n = 0, m = 0, v = 0;
    std::cin >> n >> m >> v;
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    
    for (int i = 0; i < m; i++) {
        int one, two;
        std::cin >> one >> two;
        graph[one].push_back(two);
        graph[two].push_back(one);
    }
    
    // 각 노드의 인접 리스트 정렬
    for (int i = 1; i <= n; ++i) {
        std::sort(graph[i].begin(), graph[i].end());
    }
    
    DFS(v);
    std::cout << "\n";
    
    // visited 배열 초기화
    std::fill(visited.begin(), visited.end(), false);
    
    BFS(v);

    return 0;
}