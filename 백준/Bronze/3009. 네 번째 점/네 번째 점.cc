#include <iostream>

int main()
{
    int x1,y1,x2,y2,x3,y3;
    std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1==x2){
        if(y1==y2){
            std::cout<<x3<<" "<<y3;
        }else if(y1==y3){
            std::cout<<x3<<" "<<y2;
        }else{
            std::cout<<x3<<" "<<y1;
        }
    }else if(x1==x3){
        if(y1==y2){
            std::cout<<x2<<" "<<y3;
        }else if(y1==y3){
            std::cout<<x2<<" "<<y2;
        }else{
            std::cout<<x2<<" "<<y1;
        }
    }else{
       if(y1==y2){
            std::cout<<x1<<" "<<y3;
        }else if(y1==y3){
            std::cout<<x1<<" "<<y2;
        }else{
            std::cout<<x1<<" "<<y1;
        } 
    }

    return 0;
}