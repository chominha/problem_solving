#include <iostream>
#include <set>
#include <vector>

int main()
{
    int listenPNum = 0, lookPNum = 0;
    std::cin>>listenPNum>>lookPNum;
    std::set<std::string> listenP;
    std::string name;
    std::set<std::string> answer;

    for(int i=0; i<listenPNum; i++){
       std::cin>> name;
       listenP.insert(name);
    }
    for(int i=0; i<lookPNum; i++){
       std::cin>> name;
       if(listenP.find(name) != listenP.end()){
           answer.insert(name);
           
       }
    }
    std::cout <<answer.size()<<"\n";
    for(const auto& a : answer){
        std::cout<<a<<"\n";
    }

    return 0;
}

/*
a==name : 시간초과
listenP.find(name) != listenP.end() : 메모리 초과
for안에 listenp.find(name) != listenp.end() 넣으면 효율 떨어짐
불필요한 반복
중복제거를 위해 answer을 vector에서 set으로 변경
듣도 못한 사람 저장하고 
보도 못한 사람 받을 때 있나 검사하고 num에 +1 하고 vector에 저장
*/
