#include <iostream>
#include <string>
#include <vector> 

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL); 

    std::string str;
    std::vector<std::string> strList;
    while(std::getline(std::cin, str)){
        strList.push_back(str);
    }
    for(int i=0; i<strList.size(); i++){
        std::cout <<strList[i]<<"\n";
    }

    return 0;
}