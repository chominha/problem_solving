#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int one=0, two=0;
    std::string oneN, twoN;
    std::cin>>oneN;
    std::cin>>twoN;
    one = int(oneN[2]-'0')*100 + int(oneN[1]-'0')*10 + int(oneN[0]-'0');
    two = int(twoN[2]-'0')*100 + int(twoN[1]-'0')*10 + int(twoN[0]-'0');
    if(one > two){
        std::cout<<one;
    }
    else{
        std::cout<<two;
    }

    return 0;
}


/*
문자 -> 숫자로 하려면 '0'을 꼭 빼줘야 한다.
숫자를 문자열로 입력받아서 해결
*/