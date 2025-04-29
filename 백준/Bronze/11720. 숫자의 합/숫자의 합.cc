#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int sum=0, n=0;
    std::string fullN;
    std::cin>>n;
    std::cin>>fullN;
    for(int i=0; i<n; i++){
        sum = sum + (fullN[i] - '0');  // '0' 빼야 숫자가 됨

    }
    std::cout <<sum;

    return 0;
}


/*
문자 -> 숫자로 하려면 '0'을 꼭 빼줘야 한다.
숫자를 문자열로 입력받아서
숫자로 바꿔서 더해라라
*/