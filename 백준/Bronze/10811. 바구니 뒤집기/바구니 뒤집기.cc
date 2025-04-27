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
    for(int i=0; i<n; i++){
        mybag[i] = i+1;
    }
    std::vector<int> input(2);
    
    for (int j=0; j<m; j++){
        for(int i=0; i<2; i++){
        std::cin >> input[i];
        }
        int a=input[0]-1, b=input[1]-1;
        while(a<b){
            int temp;
            temp = mybag[a];
            mybag[a] = mybag[b];
            mybag[b]=temp;
            a = a+1;
            b = b-1;
        }
    }
    
    for(int i =0; i<mybag.size(); i++){
        std::cout<<mybag[i]<<" ";
    }
    
    return 0;
}

/*
거꾸로 정렬...
첫번째는 +1로 마지막은 -1로 
int a=input[0]-1, b=input[1]-1; *인덱스 주의좀*
*/