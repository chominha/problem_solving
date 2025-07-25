#include <iostream>
#include <vector>
int fib_num=1,fibonacci_num=0;

int fib(int n){
    fib_num ++;
    if(n==1 || n==2){
        fib_num--;
        return 1;
    }
    else return (fib(n-1) + fib(n-2));
}

int fibonacci(int n){
    if(n==1 ||n==2){
        return 1;
    }
    std::vector<int> dp(n + 1);
    dp[1] = dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];   
}

int main()
{
    int num;
    std::cin>>num;
    fib(num);
    fibonacci(num);
    std::cout<<fib_num<<" "<<fibonacci_num+num-2;

    return 0;
}