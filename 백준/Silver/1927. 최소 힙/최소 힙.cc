#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int num;
    std:: cin>>num;
    std::priority_queue<int, std::vector<int>, std::greater<int>> answer;
    for(int i=0; i<num; i++){
        int one;
        std::cin>>one;
        if(one==0){
            if(answer.empty()){
                std::cout<<"0"<<"\n";
            }
            else{
                std::cout<<answer.top()<<"\n";
                answer.pop();
            }
        }
        else{
            answer.push(one);
        }
    }
    
    

    return 0;
}