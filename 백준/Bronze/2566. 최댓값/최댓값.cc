#include <iostream>
#include <vector>

int main(){
    int n=0, m=0, maxnum=-1;
    std::vector<std::vector<int>> fir(9, std::vector<int>(9));

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            std::cin>>fir[i][j];
            if(fir[i][j]>maxnum){
                maxnum = fir[i][j];
                n=i;
                m=j;
            }
        }
    }
    std::cout<<maxnum<<'\n';
    std::cout<<n+1<<' '<<m+1;

    return 0;
    
}
/*
*/