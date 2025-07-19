#include <bits/stdc++.h>

int main()
{
    int one, two, three;
    std::cin>>one>>two>>three;
    std::vector<int> answer;
    answer.push_back(one);
    answer.push_back(two);
    answer.push_back(three);
    sort(answer.begin(), answer.end());
    
    if(one+two+three==180){
        if(one==60 && two==60 && three==60){
            std::cout<<"Equilateral";
        }else if(answer[0]==answer[1] || answer[1]==answer[2]){
            std::cout<<"Isosceles";
        }else if(one!=two && two!=three && three!=one){
            std::cout<<"Scalene";
        }
        
    }else{
        std::cout<<"Error";
    }
    return 0;
}