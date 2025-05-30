#include <iostream>
#include <string>

int main()
{
    std::string answer;
    std::cin >> answer;
    
    std::string stdlist[] = {"dz=", "c=", "c-", "d-", "lj", "nj", "s=", "z="};
    
    for (const std::string& str : stdlist) {
        size_t pos = 0;
        while ((pos = answer.find(str, pos)) != std::string::npos) {
            //(npos는 "not found"의 의미)
            answer.replace(pos, str.length(), "A"); 
        }
    }

    std::cout << answer.size() << std::endl;
    return 0;
}
