#include <bits/stdc++.h>


int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    
    
    int a, b, v, answer=0;
    int num =0;
    std::cin>>a>>b>>v;
    answer = ((v-b)+(a-b)-1)/(a-b);

    std::cout<<answer;

    return 0;
}