#include <iostream>

int main()
{
    int num, answer=0;
    std::cin>>num;
    for (int i = 1; i < num; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == num) {
            answer = i;
            break; 
        }
    }
    
    std::cout<<answer;
    return 0;
}
//temp를 10으로 나눈 값을 넣어서 0보다 클때는 계속 반복해 더한다. 그게 같으면!