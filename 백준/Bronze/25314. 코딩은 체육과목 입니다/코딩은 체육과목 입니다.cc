#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int num; std::cin>>num;
    for (int i=0; i<num/4; i++){
        std::cout<<"long ";
    }
    std::cout<<"int";
}

/*
영수증 총 금액 = sum
long int 4바이트
long 하나당 4씩
*/