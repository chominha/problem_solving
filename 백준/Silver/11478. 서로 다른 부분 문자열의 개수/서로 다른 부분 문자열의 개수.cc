#include <iostream>
#include <vector>
#include <set>

int main() {
    std::string str;
    std::cin>>str;
    std::set<std::string> strlist;
    
    for(int i=0; i<str.size(); i++){
        for(int j=0; j<str.size(); j++){
            strlist.insert(str.substr(i,j));
        }
        
    }
    std::cout<<strlist.size();

    return 0;
}

/*
글자수 n
한글자씩 n
두글자씩 n-1
...
n글자씩 1
*/