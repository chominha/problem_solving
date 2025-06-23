#include <bits/stdc++.h>

int main()
{
    int num, answer=1;
    std::cin>>num;
    
    for(int i=0; i<num; i++){
        answer = pow(2,i+1);
    }
    
    std::cout<<answer;
    return 0;
}