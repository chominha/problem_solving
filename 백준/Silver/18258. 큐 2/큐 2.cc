#include <iostream>
#include <queue>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL);
    
    int num=0, saynum=0;
    std::cin>>num;
    std::string say;
    std::queue<int> queueanswer;
    std::vector<int> answer;
    

    for(int i=0; i<num; i++){
        std::cin>>say;
        if(say=="push"){
            std::cin>>saynum;
            queueanswer.push(saynum);
        }
        else if(say=="pop"){
            if(! queueanswer.empty()){
                answer.push_back(queueanswer.front());
                queueanswer.pop();
            }else{
                answer.push_back(-1);
            }
        }
        else if(say=="size"){
            answer.push_back(queueanswer.size());
        }
        else if(say=="empty"){
            if(queueanswer.empty()){
                answer.push_back(1);
            }else{
                answer.push_back(0);
            }
        }
        else if(say=="front"){
            if(!queueanswer.empty()){
                answer.push_back(queueanswer.front());
            }else{answer.push_back(-1);}
        }
        else if(say=="back"){
            if(!queueanswer.empty()){
                answer.push_back(queueanswer.back());
            }else{answer.push_back(-1);}
        }
    }
    for( int i : answer){
        std::cout << i<< '\n';
    }


    return 0;
}