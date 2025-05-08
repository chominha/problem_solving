#include <iostream>
#include <set>

int main() {
    int fir =0, sec=0, num=0;
    std::cin>>fir>>sec;
    std::set<int> firlist;
    std::set<int> seclist;
    
    for(int i=0; i<fir; i++){
        std::cin>>num;
        firlist.insert(num);
    }
    for(int i=0; i<sec; i++){
        std::cin>>num;
        seclist.insert(num);
    }
    num =0;
    for(int i : firlist){
        if(seclist.find(i)==seclist.end()){
            num++;
        }
    }
    for(int i : seclist){
        if(firlist.find(i)==firlist.end()){
            num++;
        }
        
    }
    std::cout<<num;

    return 0;
}

/*
seclist.find(i)는 iterator 
seclist.end()도 iterator 
iterator랑 false는 비교가 안 되거나 의미가 없다.
*/