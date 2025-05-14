#include <iostream>
#include <stack>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    std::string str;
    bool run=true;
    std::vector<std::string> answer;
    
    
    while(run == true){
        bool isTrue = true;
        std::getline(std::cin, str);//한 줄 전체 입력
        if(str=="."){
            run = false;
            break;
        }
        
        std::stack<char> check;
        for(char a : str){
            if(a=='[' or a=='('){
                check.push(a);
            }
            else if(a==']')
            {
                if(!check.empty() &&check.top() == '[') //!check.empty() &&도 체크 해줘야한다.
                {
                    check.pop();
                }
                else{
                    isTrue = false;
                    break;
                }
                
            }
            else if(a==')'){
                if(!check.empty() &&check.top() == '(')
                {
                    check.pop();
                }
                else{
                    isTrue = false;
                    break;
                }
            }
            
            
        }
        if(isTrue && check.empty()){
            answer.push_back("yes");
        }
        else{
            answer.push_back("no");
        }
       
    }
    for(const auto& a : answer){
        std::cout << a << "\n";
    }

    return 0;
}