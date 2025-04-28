#include <iostream>
#include <string>

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL); 
    
    std::string a; std::cin>> a;
    int b; std::cin>>b;
    std::cout<<a[b-1];
    

    return 0;
}