#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);  
    
    int N,M;
    std::cin>>N>>M;
    std::vector<int> answer(N+1, 0);
    for(int i=1; i<=N; i++){
        int num;
        std::cin>>num;
        answer[i] = answer[i-1] + num;
    }
    for(int i=0; i<M; i++){
        int a,b;
        std::cin>>a>>b;
        std::cout<<answer[b]-answer[a-1]<<"\n";
    }

    return 0;
}