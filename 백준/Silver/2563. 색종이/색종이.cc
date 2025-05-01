#include <iostream>
#include <vector>
#include <string>

int main(){
    char white[100][100] ={0};
    int x=0, y=0, sum=0, n=0;
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>x>>y;
        for(int j=x; j<x+10; j++){
            for(int k=y; k<y+10; k++){
                white[j][k] =1;
            }
        }
    }
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            sum += white[i][j];
        }
    }
    std::cout << sum;
    return 0;
}
/*
100*100에서
(x~x+10)(y~y+10)를 1로 바꿈.
그 후 다 더하기
*/