#include <iostream>
#include <vector>

int main()
{
    int num =0, rank=0;
    std::cin>>num>>rank;
    std::vector<int> numList(num);
    
    for(int i=0; i<num; i++){
        std::cin>>numList[i];
    }
    for(int i=0; i<num-1; i++){
        for(int j=0; j<num-1; j++){
            if(numList[j]>numList[j+1]){
                int temp=0;
                temp = numList[j];
                numList[j] = numList[j+1];
                numList[j+1] = temp;
            }
        }
    }
    std::cout<<numList[num-rank];
    
    

    return 0;
}