#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int num;
    std::cin>>num;
    std::priority_queue<std::pair<int, int>,
                        std::vector<std::pair<int, int>>,
                        std::greater<std::pair<int, int>>> answer;
    for(int i=0; i<num; i++){
        int one;
        std::cin>>one;
        if(one==0){
            if(answer.empty()){
                std::cout<<0<<"\n";
            }else{
            std::cout<<answer.top().second<<"\n";
            answer.pop();
            }
        }else{
            answer.push({std::abs(one), one});
        }
    }

    return 0;
}
/*
std::priority_queue<자료형, 컨테이너, 정렬 기준> 변수명;
greater는 "작은 게 높은 우선순위" (최솟값 우선, Min Heap)
less큰 값이 먼저 pop (최댓값 우선, Max Heap)
*/