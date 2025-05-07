#include <iostream>
#include <vector> 
#include <utility> // for std::pair, std::swap
#include <algorithm>

int main()
{
    int num=0;
    std::cin>>num;
    std::vector<std::pair<int, std::string>>member;
    int age=0; std::string name;
    for(int i=0; i<num; i++){
        std::cin>>age>>name;
        member.emplace_back(age, name);
        // 또는 member.push_back({age, name});
    }
    std::stable_sort(member.begin(), member.end(), [](const auto& a, const auto& b) {
        return a.first < b.first;
    });

    
    for(const auto& p : member){
        std::cout<<p.first<<" "<<p.second<<"\n";
    }
    return 0;
}
/*
벡터로 2개 일단 받고 나이로 순서 다시 정렬
*/