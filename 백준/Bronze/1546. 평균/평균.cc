#include <iostream>
#include <vector>
#include <iomanip>  // std::setprecision 사용을 위한 헤더

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int n =0, max=0;
    double sum = 0;
    std::cin >> n;
    std::vector<int>numList(n);

    for(int i=0; i<n; i++){
        std::cin>>numList[i];
        if(max<numList[i]){
            max=numList[i];
        }
    }
    for(int i=0; i<n; i++){
        sum = sum +(static_cast<double>(numList[i])/max)*100.0;
        //sum = sum+numList[i];
        }
    std::cout<<static_cast<double>(sum/n);
    return 0;
}
/*
과목수 : N
최대 : max
평균 : mean
총 합 : sum
*/