#include <iostream>

int main()
{
    int a; std::cin >> a;
    int b; std::cin >> b;
    
    if (a >0) {
        if (b>0){
            std::cout<<"1";
        }
        else{
            std::cout<<"4";
        }
        
    }
    else{
        if(b>0){
            std::cout<<"2";
        }
        else{
            std::cout<<"3";
        }
    }

    return 0;
}