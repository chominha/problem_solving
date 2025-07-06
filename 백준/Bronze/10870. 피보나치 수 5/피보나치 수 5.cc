#include <bits/stdc++.h>


int make(int num){
    if(num<=1) return num;
    
    else return make(num-1) + make(num-2);
}

int main()
{
    int num;
    std::cin>>num;
    std::cout<<make(num);

    return 0;
}