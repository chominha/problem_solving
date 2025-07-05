#include <bits/stdc++.h>

int main()
{
    int a, answer=0;
    std::cin>>a;

    for(int i=0; i<a; i++){
        int num;
        std::cin>>num;
        
        if (num < 2) continue;
        
        bool cheak = true;
        for(int j=2; j<num; j++){
            if(num%j==0){
                cheak = false;
                break;
            }
        }
        if(cheak){
            answer+=1;
        }
    }
    std::cout<<answer;
    return 0;
}