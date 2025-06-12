#include <bits/stdc++.h>

int main()
{
    int num, answer=-1, numf,numt;
    std::cin>>num;
    
    for(numf=num/5; numf>=0; numf--){
        int midnum = num - numf * 5;
        if (midnum % 3 == 0) {
            numt = midnum / 3;
            answer = numf + numt;
            break;
        }
    }
    
    std::cout<<answer;
    return 0;
}
