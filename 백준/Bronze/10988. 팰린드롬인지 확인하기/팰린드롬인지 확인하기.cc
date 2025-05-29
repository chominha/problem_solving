#include <bits/stdc++.h>

int main()
{
    std::string str;
    std::cin>>str;
    std::string restr;
    restr = str;
    reverse(restr.begin(), restr.end());
    if(restr==str){
        std::cout<<1;
    }else std::cout<<0;

    return 0;
}