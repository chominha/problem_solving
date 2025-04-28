#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL); 
    
    std::string a; std::cin>> a;

    std::cout<<a.size();
    

    return 0;
}