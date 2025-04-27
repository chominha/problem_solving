#include <iostream>
#include <map>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    std::vector<int> numList(10);
    std::map<int, int> remain;

    for(int i=0; i<10; i++){
        std::cin>>numList[i];
        remain[numList[i]%42] = remain[numList[i]%42] + 1;
    }
    std::cout<<remain.size();
    return 0;
}

/*
숫자 10개 받을거임

*/