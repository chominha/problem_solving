#include <iostream>
#include <vector>
#include <stack>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int commandNum =0, num=0;
    std::vector<int> answerlist;
    std::stack<int> stacklist;
    std::cin>>commandNum;
    
    for(int i=0; i<commandNum; i++){
        std::cin>>num;
        if(num==1){
            std::cin>>num;
            stacklist.push(num);
        }
        else if(num==2){
            if(stacklist.empty()){
                answerlist.push_back(-1);
            }
            else{
                answerlist.push_back(stacklist.top());
                stacklist.pop();
            }
        }
        else if(num==3){
            answerlist.push_back(stacklist.size());
        }
        else if(num==4){
            if(stacklist.empty()){
                answerlist.push_back(1);
            }
            else{
                answerlist.push_back(0);
            }
        }
        else if(num==5){
            if(stacklist.empty()){
                answerlist.push_back(-1);
            }
            else{
                answerlist.push_back(stacklist.top());
            }
        }
    }
    for(int a : answerlist){
        std::cout << a << "\n";
    }

    return 0;
}