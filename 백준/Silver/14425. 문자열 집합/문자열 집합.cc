#include <iostream>
#include <set>
#include <vector>

int main()
{
    int n=0, m=0, num=0;
    std::cin>>n>>m;
    std::string name;
    std::set<std::string> nset;
    
    for(int i=0; i<n; i++){
        std::cin>>name;
        nset.insert(name);
    }
    for(int i=0; i<m; i++){
        std::cin>>name;
        if(nset.find(name) != nset.end()){
            num +=1;
        }
        
    }
    std::cout<<num;
    return 0;
}
