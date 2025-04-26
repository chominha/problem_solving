#include <iostream>

int main()
{
    int h; std::cin>>h;
    int m; std::cin>>m;
    int oventime; std::cin>>oventime;
    
    if (m+oventime>=60){
        m = m + oventime;
        h = h+m/60;
        m = m%60;
        if(h>=24){
            h = h -24;
        }
    }
    else{
        m = m+oventime;
    }
    
    std::cout<<h<<" "<<m;

    return 0;
}


/*
현재 시간 h, m
오븐시간 oventime

m+oventim이 60분 넘으면 %60으로 나머지를 m 몫을 h에 +시킨다.
이때, 시간이 24시간이 같거나 넘어갈 경우 24를 빼준다. 

공백 이슈?
*/