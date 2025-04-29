#include <iostream>
#include <map>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::map<char, int> myMap;
    for(int i=97; i<123; i++){
        myMap[char(i)] = -1;
    }
    
    std::string str;
    std::cin>>str;
    for(int i=0; i<str.size(); i++){
        if(myMap[str[i]]==-1){
            myMap[str[i]] = i;
        }
    }
    
    for(int i=97; i<123; i++){
        std::cout <<myMap[i]<<" ";
    }
    

    return 0;
}


/*
딕셔너리 이용하기
key에 알파벳
만약 -1이 들어가있다면 위치 업데이트
그 외의 숫자가 들어간다면 패스
*/