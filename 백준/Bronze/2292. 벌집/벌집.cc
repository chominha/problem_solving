#include <iostream>

int main()
{
    int num, answer=1, m=1;
    std::cin>>num;
    
    while(num> m){
        m += 6* answer;
        answer ++;
    }
    
    std::cout<<answer;
    return 0;
}
