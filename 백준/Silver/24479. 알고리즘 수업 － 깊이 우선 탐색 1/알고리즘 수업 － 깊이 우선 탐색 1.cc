//24479
#include <bits/stdc++.h>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;
std::vector<int> order;
int cnt = 0;

void dfs(int node){
    visited[node] = true;
    order[node] = ++cnt;
    
    for(int next : graph[node]){
        if(!visited[next]){
            dfs(next);
        }
    }
    
}

int main()
{
    int N,M,R;
    std::cin>>N>>M>>R;
    graph.resize(N+1);
    visited.resize(N+1, false);
    order.resize(N+1, 0);
    
    int node,next;
    for(int i=0; i<M; i++){
        std::cin>>node>>next;
        graph[node].push_back(next);
        graph[next].push_back(node);
    }
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(R);

    for (int i = 1; i <= N; i++) {
        std::cout << order[i] << "\n";
    }

    return 0;
}