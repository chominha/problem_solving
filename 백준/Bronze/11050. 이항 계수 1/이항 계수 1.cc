#include <iostream>

int main()
{
    int num, num2, answer=1;
    std::cin>>num>>num2;
    for(int i=0; i<num2; i++){
        answer = answer*(num-i);
        answer = answer/(i+1);
    }
    std::cout<<answer;

    return 0;
}