#include <iostream>
#include <map>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int n=0, m=0, num=0;;
    std::map<int, int> nset;
    std::vector<int> answer;
    
    std::cin>>n;
    for (int i = 0; i < n; i++) {
        std::cin >> num;
        nset[num] += 1;
    }
    std::cin>>m;
    for(int i=0; i<m; i++){
        std::cin>>num;
        answer.push_back(nset[num]);
    }
    for(const auto& a : answer){
        std::cout<< a<<" ";
    }

    return 0;
}
/*
for을 이용해서 첫 줄 전부 검사하면 시간초과
처음 저장할 때부터 map에 key=숫자 넣고 value는 count 비교해서 출력해도 시간초과

*/