#include <iostream>

int main()
{
    std::string num;
    std::cin>>num;
    
    for(int i=0; i<num.size()-1; i++){
        int temp=0;
        for(int j=0; j<num.size()-1; j++){
            if(num[j]<num[j+1]){
                temp = num[j+1];
                num[j+1]=num[j];
                num[j] = temp;
            }
        }
    }
    std::cout<<num;
    return 0;
}