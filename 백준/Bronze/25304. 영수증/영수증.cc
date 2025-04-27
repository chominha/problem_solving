#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int sum=0, totalC=0, price=0, count=0, totalS=0; 
    std::cin>>sum>>totalC;
    for(int i=0; i<totalC; i++){
        std::cin >>price>>count;
        totalS = totalS + (price*count);
    }
    
    if(sum==totalS){
        std::cout<<"Yes";
    }
    else{
        std::cout<<"No";
    }

    return 0;
}

/*
영수증 총 금액 = sum
물건 수 = totalC
가격 * 갯수 =>price, count
if
sum = 계산 총액 => yes
!= => no
*/