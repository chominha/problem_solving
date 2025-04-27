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
    for(int i=0; i<mybag.size(); i++){
        mybag[i]=i+1;
    }
    
    std::vector<int> input(2);
    
    for (int i=0; i<m; i++){
        std::cin>>input[0]>>input[1];
        int temp=0;
        temp = mybag[input[0]-1];
        mybag[input[0]-1] = mybag[input[1]-1];
        mybag[input[1]-1] = temp;
    }
    for(int i =0; i<mybag.size(); i++){
        std::cout<<mybag[i]<<" ";
    }
    
    return 0;
}
