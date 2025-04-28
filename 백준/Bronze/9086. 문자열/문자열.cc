#include <iostream>
#include <string>
#include <vector> 

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL); 
    
    int n; std::cin>>n;
    std::string str;
    std::vector<std::string> strList;
    for(int i=0; i<n; i++){
        std::cin>>str;
        strList.push_back(std::string(1, str.front())); 
        strList.push_back(std::string(1, str.back()));
        
    }
    for(int i=0; i<n; i++){
        std::cout<<strList[i*2][0]<<strList[i*2+1][0]<<"\n";
    }
    

    return 0;
}