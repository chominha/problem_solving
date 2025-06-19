#include <iostream>
#include <map>
#include <string>

int main()
{
    int num;
    std::cin>>num;
    std::string one, two;
    std::map<std::string, int> answerMap;
    
    answerMap["ChongChong"] = 1;
    
    
    for(int i=0; i<num; i++){
        std::cin>>one>>two;
        if (answerMap.count(one) || answerMap.count(two)) {
            answerMap[one] = 1;
            answerMap[two] = 1;
        }
        
    }
    std::cout << answerMap.size() << std::endl;

    return 0;
}
//총총이 옆에 있으면 1 
//map안에 있는데 1 이면 처음 들어오는애도 1로 map에 저장