//1436
#include <bits/stdc++.h>

int main()
{
    int num, answer=0, six=666;
    std::cin>>num;
    while(true){
        if(std::to_string(six).find("666") != std::string::npos){
            answer ++;
        }
        if(answer == num){
            std::cout<<six;
            break;
        }
        six ++;
    }

    return 0;
}
