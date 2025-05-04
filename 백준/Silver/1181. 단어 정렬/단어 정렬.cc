#include <iostream>
#include <set> //자동 사전순 정렬이 된다.
#include <vector>

int main()
{
    int num=0;
    std::cin>>num;
    std::set<std::string> s;
    std::vector<std::string> v;
    std::string str;
    for(int i=0; i<num; i++){
        std::cin>>str;
        s.insert(str);
    }
    for(int i=1; i<51; i++){
        for(std::string str : s){
            if(i==str.size()){
                v.push_back(str);
            }
        }
    }
    for(std::string one : v){
        std::cout<<one<<"\n";
    }
    
    

    return 0;
}
/*
중복없애기 위해서 set으로 문자만 넣는다.
그 set을 돌려서 size()와 함께 벡터에 넣는다.
size순서대로 정렬 

후 int로 처음 문자를 int 바꿔서 비교.
!!!set은 알아서 사전순이다!
*/