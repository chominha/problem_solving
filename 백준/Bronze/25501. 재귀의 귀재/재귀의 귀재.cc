#include <bits/stdc++.h>
int answer=0;

int recursion(const char *s, int l, int r){
    answer +=1;
    if(l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
    int num;
    std::cin>>num;
    for(int i=0; i<num; i++){
        std::string str;
        std::cin>>str;
        answer = 0;
        printf("%d ", isPalindrome(str.c_str()));
        std::cout<<answer<<"\n";
    }
    
    return 0;
}