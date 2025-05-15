#include <iostream>
#include <queue>
#include <vector>

int main()
{
    int num=0,c=0;
    std::cin>>num>>c;
    std::queue<int> yo;
    std::vector<int> answer;
    
    for(int i=1; i<num+1; i++){
        yo.push(i);
    }
    while(!yo.empty()){
        for(int i=0; i<c-1; i++){
            yo.push(yo.front());
            yo.pop();
        }
        answer.push_back(yo.front());
        yo.pop();
    }
    std::cout<<"<";
    for(int i : answer){
        std::cout<<i;
        if (i != answer.back()){
            std::cout << ", ";
        } 
    }
    std::cout<<">";

    return 0;
}
