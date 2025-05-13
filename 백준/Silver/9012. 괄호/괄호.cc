#include <iostream>
#include <stack>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::vector<std::string> answer;
    std::string str;
    int num=0;
    std::cin>>num;
    for(int i=0; i<num; i++){
        bool isTrue = true;
        std::stack<char> check;
    
        std::cin>>str;
        for(char a : str){
            if(a=='('){
                check.push('c');
            }
            else if(a==')'){
                if(!check.empty()){
                   check.pop(); 
                }
                else{
                    isTrue = false;
                    break;
                }
            }
        }
        if(isTrue && check.empty()){
            answer.push_back("YES");
        }else{
            answer.push_back("NO");
        }
    }
    for(std::string a : answer){
        std::cout <<a<<"\n";
    }

    return 0;
}
/*
bool 초기화 위치 주의.
스택도 초기화 해줘야지!
*/
