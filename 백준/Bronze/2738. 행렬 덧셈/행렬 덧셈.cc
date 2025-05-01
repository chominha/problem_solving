#include <iostream>
#include <vector>

int main(){
    int n=0, m=0;
    std::cin>>n>>m;
    std::vector<std::vector<int>> fir(n, std::vector<int>(m));
    std::vector<std::vector<int>> sec(n, std::vector<int>(m));
    std::vector<std::vector<int>> fin(n, std::vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>fir[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cin>>sec[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            fin[i][j] = fir[i][j]+sec[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            std::cout<<fin[i][j]<<" ";
            if(j==m-1){
                std::cout<<'\n';
            }
        }
    }

    return 0;
    
}

/*
vector[n][m]

*/