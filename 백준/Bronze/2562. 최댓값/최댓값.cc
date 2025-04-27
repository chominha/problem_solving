#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int num=1, max=0;
    std::vector<int> numList(9);
    for(int i=0; i<9; i++){
        std::cin >> numList[i];
    }
    max = numList[0];
    for(int i =1; i<9; i++){
        if(max<numList[i]){
            max = numList[i];
            num = i+1;
        }
    }
    std::cout<<max;
    std::cout<<"\n";
    std::cout<<num;
    return 0;
}

/*
9개의 숫자가 있고 
그 중 최대값, 최댓값이 몇번째인지 출력
*/