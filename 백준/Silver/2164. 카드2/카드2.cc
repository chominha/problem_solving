#include <iostream>
#include <queue>

int main()
{
    int num=0;
    std::cin>>num;
    
    std::queue<int> cardQueue;
    for(int i=1; i<num+1; i++){
        cardQueue.push(i);
    }

    while(cardQueue.size()>1){
        cardQueue.pop();
        cardQueue.push(cardQueue.front());
        cardQueue.pop();
    }
    std::cout<<cardQueue.front();
    

    return 0;
}