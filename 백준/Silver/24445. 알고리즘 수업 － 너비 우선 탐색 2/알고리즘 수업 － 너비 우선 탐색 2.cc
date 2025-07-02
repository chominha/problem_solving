#include <bits/stdc++.h>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;
std::vector<int> order;
int cnt = 0;

void bfs(int node){
    std::queue<int> q;
    visited[node] = true;
    q.push(node);
    order[node] = ++cnt;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
                order[next] = ++cnt;
            }
        }
    }
}

int main()
{
    int N,M,R;
    std::cin>>N>>M>>R;
    graph.resize(N+1);
    visited.resize(N+1, false);
    order.resize(N + 1, 0);
    
    for(int i=0; i<M; i++){
        int u,v;
        std::cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end(),std::greater<int>()) ;
    }
    
    bfs(R);
    
    for (int i = 1; i <= N; i++) {
        std::cout << order[i] << "\n";
    }

    return 0;
}