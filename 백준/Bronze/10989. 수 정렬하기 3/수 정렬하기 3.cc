#include <iostream>
#include <vector>
int main()
{
    int count[10001]={0};
    int num=0, x=0;
    std::cin>>num;
    
    for(int i=0; i<num; i++){
        std::cin>>x;
        count[x]++;
    }
    for(int i=1; i<10001; i++){
        while(count[i]--){
            std::cout<<i<<'\n';
        }
    }
    return 0;
}