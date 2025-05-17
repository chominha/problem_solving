#include <iostream>
#include <deque>
#include <vector>

int main()
{
    int lineNum=0, commendnum=0; std::cin>>lineNum;
    std::deque<int> dec;
    std::vector<int> answer;
    for(int i=0; i<lineNum; i++){
        int num=0;
        std::cin>>commendnum;
        if(commendnum==1){
            std::cin>>num;
            dec.push_front(num);
        }
        else if(commendnum==2){
            std::cin>>num;
            dec.push_back(num);
        }
        else if(commendnum==3){
            if(!dec.empty()){
                answer.push_back(dec.front());
                dec.pop_front();
            }
            else{
                answer.push_back(-1);
            }
        }
        else if(commendnum==4){
            if(!dec.empty()){
                answer.push_back(dec.back());
                dec.pop_back();
            }
            else{
                answer.push_back(-1);
            }
        }
        else if(commendnum==5){
            answer.push_back(dec.size());
        }
        else if(commendnum==6){
            if(!dec.empty()){
                answer.push_back(0);
            }
            else{
                answer.push_back(1);
            }
        }
        else if(commendnum==7){
            if(!dec.empty()){
                answer.push_back(dec.front());
            }
            else{
                answer.push_back(-1);
            }
        }
        else if(commendnum==8){
            if(!dec.empty()){
                answer.push_back(dec.back());
            }
            else{
                answer.push_back(-1);
            }
        }
        
    }
    for(int i : answer){
        std::cout<< i<<'\n';
    }

    return 0;
}