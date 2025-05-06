#include <iostream>
#include <vector>

int main()
{
    int n = 0;
    std::cin >> n;
    int input=0;
    int sum=0;
    std::vector<int> v;

    for(int i=0; i<n; i++){
        std::cin>>input;
        if(input ==0){
            v.pop_back();
        }
        else{
            v.push_back(input);
        }
        
    }
    if(v.empty()){
        std::cout<<0;
    }
    else{
        for(int i : v){
            sum += i;
        }
        std::cout<<sum;
    }
    
    return 0;
}
