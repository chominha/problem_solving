#include <iostream>

int main()
{
    int h; std::cin>>h;
    int m; std::cin>>m;
    
    if(h>0){
        if(m>=45){
            std::cout<<h<<" "<<m-45;
        }
        else{
            std::cout<<h-1<<" "<<m+60-45;
        }
    }
    else{
        if(m>=45){
        std::cout<<h<<" "<<m-45; 
        }
        else{
            std::cout<<23<<" "<<m+60-45;
        }
    }
    return 0;

}