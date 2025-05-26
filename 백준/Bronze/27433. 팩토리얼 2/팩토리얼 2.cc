#include <bits/stdc++.h>

long long factorial(int i){
    if(i <=1) return 1;
    return i*factorial(i-1);
    
}

int main()
{
    int num;
    std::cin>>num;
    std::cout<<factorial(num);


    return 0;
}