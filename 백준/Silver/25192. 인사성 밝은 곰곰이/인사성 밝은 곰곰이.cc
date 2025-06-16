#include <bits/stdc++.h>

int main()
{
    int num, answer=0;
    std::cin>>num;
    std::set<std::string> peset;
    for(int i=0; i<num; i++){
        std::string str;
        std::cin>>str;
        if(str=="ENTER"){
            answer +=peset.size();
            peset.clear();
        }else{
            peset.insert(str);
        }
        
    }answer += peset.size();
    
    std::cout<<answer;
    return 0;
}