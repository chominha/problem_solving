#include <bits/stdc++.h>

std::vector<std::vector<int>> graph;
std::vector<bool> visited;
std::set<int> answer;

void cheak(int node){
    visited[node] = true;
    answer.insert(node);
    for(int next : graph[node]){
        if(!visited[next]){
            cheak(next);
        }
    }
    
}

int main()
{
    int C, N;
    std::cin>>C>>N;
    graph.resize(C+1);
    visited.resize(C+1, false);
    
    for(int i=0; i<N; i++){
        int one, two;
        std::cin>>one>>two;
        graph[one].push_back(two);
        graph[two].push_back(one);
        
    }
    cheak(1);
    std::cout<<answer.size()-1;
    

    return 0;
}