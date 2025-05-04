#include <iostream>
#include <set> //자동 사전순 정렬이 된다.
#include <vector>

int main()
{
    int num=0;
    std::cin>>num;
    std::set<int> ints;
    int one=0;
    for(int i=0; i<num; i++){
        std::cin>>one;
        ints.insert(one);
    }
    for(int i : ints){
        std::cout<<i<<"\n";
    }
    return 0;
}
/*
개꿀
퀵, 합병, 힙 잘 알아두기기
!!!set은 알아서 사전순이다!
*/