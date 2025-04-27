#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int n=0, m=0;
    std::cin>>n;
    std::cin>>m;
    
    std::vector<int> mybag(n);
    std::vector<int> input(3);
    
    for (int j=0; j<m; j++){
        for(int i=0; i<3; i++){
        std::cin >> input[i];
        }
        
        for(int i=input[0]-1; i<input[1]; i++){
            mybag[i] = input[2];
        }
    }
    for(int i =0; i<mybag.size(); i++){
        std::cout<<mybag[i]<<" ";
    }
    
    return 0;
}

/*
내가 가진 주머니 수 => n과 조건 몇 번 줄 =>m
최종 n개의 내 주머니 속 숫자 보여줘.
#인덱스 실수
#변수명 인식
*/