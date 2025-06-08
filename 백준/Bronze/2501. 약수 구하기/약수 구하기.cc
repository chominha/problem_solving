#include <iostream>
#include <vector>

int main()
{
    int num, answernum;
    std::cin>>num>>answernum;
    
    std::vector<int> answer;
    for(int i=1; i<num+1; i++){
        if(num%i==0){
            answer.push_back(i);
        }
    }
    std::cout<<answer[answernum-1];

    return 0;
}