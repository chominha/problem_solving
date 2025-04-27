#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int  count=0; std::cin >> count;
    int min=0, max=0;
    std::vector<int> numList(count);
    for(int i=0; i<count; i++){
        std::cin >> numList[i];
    }
    min = numList[0]; 
    max = numList[0];
    for(int i =1; i<count; i++){
        if(min>numList[i]){
            min = numList[i];
        }
        if(max<numList[i]){
            max = numList[i];
        }
    }
    std::cout<<min<<" "<<max;
    return 0;
}

/*
입력 개수 = count
총 입력 count * n
출력 : 최소, 최대 
*/