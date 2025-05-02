#include <iostream>
#include <vector>

int main()
{
    int sum=0, mean=0;
    std::vector<int> numList(5);
    for(int i=0; i<5; i++){
        std::cin>>numList[i];
        sum += numList[i];
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(numList[j]>numList[j+1]){
                int temp=0;
                temp = numList[j];
                numList[j] = numList[j+1];
                numList[j+1] = temp;
            }
        }
    }
    std::cout<<sum/5<<'\n'<<numList[2];
    
    

    return 0;
}