#include <iostream>

int main()
{
    int n; std::cin>>n;
    int sum=0;
    for(int i=1; i<n+1; i++){
        sum = sum+i;
    }
    std::cout<<sum;

    return 0;
}