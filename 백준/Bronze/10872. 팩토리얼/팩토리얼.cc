#include <iostream>

int main()
{
    int num, sum=1;
    std::cin>>num;
    if(num != 0){
        for(int i=num; i>0; i--){
            sum = sum*i;
            
        }
        std::cout<<sum;
    }
    else{
        std::cout<<sum;
    }

    return 0;
}