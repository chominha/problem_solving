#include <bits/stdc++.h>

int main()
{
    int num1=0, num2=0;
    std::vector<int> answer;
    
    std::cin>>num1;
    std::set<int> si;
    for(int i=0; i<num1; i++){
        int say;
        std::cin>>say;
        si.insert(say);
    }
    std::cin>>num2;
    std::vector<int> vi2(num2);
    for(int i=0; i<num2; i++){
        std::cin>>vi2[i];
    }
    
    for(int i : vi2){
        if(si.find(i) != si.end()){
            answer.push_back(1);
        }else{
            answer.push_back(0);
        }
    }
    for(int i : answer){
        std::cout<<i<<" ";
    }

    return 0;
}

/*
find 쓰기? = 시간초과.
순서 필요없는 set으로 첫 라인 저장 후 find?
for for로 하나하나 찾기? = 시간초과 일  것 같음
*/