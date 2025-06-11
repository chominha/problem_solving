//11365
#include <iostream>

int main()
{
    while(1){
        std::string str;
        std::getline(std::cin, str);
        if(str =="END")break;
        for(int i=str.size()-1; i>=0; i--){
            std::cout<<str[i];
        }std::cout<<"\n";
    }

    return 0;
}