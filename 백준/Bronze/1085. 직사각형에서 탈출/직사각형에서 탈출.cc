#include <bits/stdc++.h>

int main()
{
    int x,y,w,h;
    std::cin>>x>>y>>w>>h;
    
    int one, two, three, four;
    std::vector<int> answer;
    answer.push_back(w-x);
    answer.push_back(h-y);
    answer.push_back(x);
    answer.push_back(y);
    sort(answer.begin(), answer.end());
    std::cout<<answer[0];

    

    return 0;
}
//(0,0), (0,h), (w,h), (w,0)