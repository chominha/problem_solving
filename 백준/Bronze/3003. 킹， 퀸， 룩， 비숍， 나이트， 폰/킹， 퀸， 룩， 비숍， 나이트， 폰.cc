#include <iostream>
#include <vector>

int main()
{
    std::vector<int> answer;
    int num;
    std::cin>>num;
    answer.push_back(1-num);
    std::cin>>num;
    answer.push_back(1-num);
    std::cin>>num;
    answer.push_back(2-num);
    std::cin>>num;
    answer.push_back(2-num);
    std::cin>>num;
    answer.push_back(2-num);
    std::cin>>num;
    answer.push_back(8-num);
    
    for(int i:answer){
        std::cout<<i<<" ";
    }
    return 0;
}