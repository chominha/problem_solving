#include <bits/stdc++.h>

void measure_measure(int num,std::vector<int> &answer){
    for(int i=1; i<num; i++){
        if(num%i==0){
            answer.push_back(i);
        }
    }
}

int main()
{
    int num;
    while(std::cin>>num){
        std::vector<int> answer;
        if(num==-1){
            break;
        }else{
            measure_measure(num, answer);
            int total=0;
            for(int a : answer){
                total += a;
            }
            if(total==num){
                std::cout<<num<<" = "<<answer[0];
                for(int i=1; i<answer.size(); i++){
                    std::cout<<" + "<< answer[i];
                }
                std::cout<<"\n";
            }else{
                std::cout<<num<<" is NOT perfect.\n";
            }
        }
    }

    return 0;
}