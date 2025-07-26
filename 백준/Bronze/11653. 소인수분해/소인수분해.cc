#include <bits/stdc++.h>

void num(int n){
    for(int i=2; i<n; i++){
        
        while(n%i==0){
            std::cout<<i<<"\n";
            n/=i;
            
        }
    }
    if(n>1){
        std::cout<<n<<"\n";
    }
}

int main()
{
    int n;
    std::cin>>n;
    if(n>1){
        num(n);
    }

    return 0;
}