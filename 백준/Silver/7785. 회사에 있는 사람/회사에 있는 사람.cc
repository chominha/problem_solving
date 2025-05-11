#include <iostream>
#include <set>

int main()
{
    int n=0;
    std::string name, state;
    std::cin>>n;
    std::set<std::string> namelist;
    for(int i=0; i<n; i++){
        std::cin>>name>>state;
        if(state =="enter"){
            namelist.insert(name);
        }
        else if(state=="leave"){
            namelist.erase(name);
        }
    }
    //set은 순서 없음 + 인덱스 없음
    for(auto it = namelist.rbegin(); it != namelist.rend(); ++it){
        std::cout << *it<<"\n";
    }

    return 0;
}
/*
begin() : 컨테이너의 첫 번째 원소를 가리키는 반복자  - 정방향 순회 시작
end() : 컨테이너의 마지막 원소 다음을 가리킴 - `begin()`에서 `end()` 전까지 반복
rbegin() : 마지막 원소를 가리킴 (역순 시작) - 역방향 순회 시작
rend() : 첫 번째 원소 앞을 가리킴 - `rbegin()`에서 `rend()` 전까지 반복
cbegin() : `const` 버전 begin (수정 불가) - 읽기 전용
cend() : `const` 버전 end - 읽기 전용
crbegin() : `const` 버전 rbegin - 읽기 전용 역방향 
crend()` : `const` 버전 rend - 읽기 전용 역방향 
*/