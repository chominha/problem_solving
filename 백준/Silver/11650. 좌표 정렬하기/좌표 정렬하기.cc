#include <iostream>
#include <set> //자동 사전순 정렬이 된다.

int main()
{
    int num=0;
    std::cin>>num;
    std::set<std::pair<int, int>> ints;
    int one=0, two=0;
    for(int i=0; i<num; i++){
        std::cin>>one>>two;
        ints.insert({one, two});
    }
    for(const auto&p : ints){
        std::cout<<p.first<<" "<<p.second<<"\n";
    }
    return 0;
}
/*
알아서 정렬되는 set
const int&n은 n은 바꿀수 없게 해서 수정되는 걸 막는다.
*/