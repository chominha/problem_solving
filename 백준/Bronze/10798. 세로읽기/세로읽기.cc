#include <iostream>
#include <vector>

int main(){
    char str[5][15] = {0};
    std::string s;
    
    for(int i=0; i<5; i++){
        std::cin>>s;
        for(int j=0; j<s.size(); j++){
            str[i][j] = s[j];
        }
    }
        for(int j = 0; j < 15; j++) {
            for(int i = 0; i < 5; i++) { 
                if(str[i][j] != 0) {
                    std::cout << str[i][j];
            }
        }
    }
    /*
    std::vector<std::string> fir(5);
    int num=-1;
    for(int i=0; i<5; i++){
        std::cin>>fir[i];
        if(num<fir[i].size()){
            num = fir[i].size();
        }
    }
    for(int j=0; j<num; j++){
        for(int i=0; i<5; i++){
            if(j < fir[i].size()){
                std::cout<<fir[i][j];
            }
            
        }
        
    }*/
    return 0;
}
/*
한 줄의 단어는 글자들을 빈칸 없이 연속으로 나열해서 최대 15개의 글자
5, str.size()
5줄{
    str{
        str,줄
    }
}

*/