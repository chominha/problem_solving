#include <bits/stdc++.h>

int main()
{
    int a,b,c,d,e,f;
    std::vector<int> answer;
    std::cin>>a>>b>>c>>d>>e>>f;
    for(int x=-999; x<1000; x++){
        for(int y=-999; y<1000; y++){
            if(a*x+b*y==c){
                if(d*x+e*y==f){
                    answer.push_back(x);
                    answer.push_back(y);
                }
            }
        }
    }
    std::cout<<answer[0]<<" "<<answer[1];

    return 0;
}

