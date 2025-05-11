#include <iostream>
#include <set>
#include <vector>

int main()
{
    int n=0, m=0, num=0;;
    std::set<int> nset;
    std::vector<int> answer;
    
    std::cin>>n;
    for(int i=0; i<n; i++){
        std::cin>>num;
        nset.insert(num);
    }
    std::cin>>m;
    for(int i=0; i<m; i++){
        std::cin>>num;
        if(nset.find(num) != nset.end()){
            answer.push_back(1);
        }
        else{
            answer.push_back(0);
        }
    }
    for(const auto& a : answer){
        std::cout<< a<<" ";
    }
    


    return 0;
}
