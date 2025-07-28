#include <bits/stdc++.h>
std::vector<int> numlist;

int main()
{
    int n;
    std::cin>>n;
    while(n){
        int num;
        std::cin>>num;
        numlist.push_back(num);
        n--;
    }
    sort(numlist.begin(), numlist.end());
    int answer = numlist.front() * numlist.back();
    std::cout <<answer;
    return 0;
}