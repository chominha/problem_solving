//1316
#include <bits/stdc++.h>

int main()
{
    int num, answer=0;
    std::cin>>num;
    
    for(int i=0; i<num; i++){
        std::string str;
        std::cin>>str;
        bool isG = true;
        std::set<char> strset;
        int checknum=0;
        char prev =0;
        
        for (char c : str) {
            if (c != prev) {
                if (strset.count(c)) {
                    isG = false;
                    break;
                }
                strset.insert(c);
            }
            prev = c;
        }
        if(isG){
            answer ++;
        }
        
    }
    std::cout << answer;
    return 0;
}