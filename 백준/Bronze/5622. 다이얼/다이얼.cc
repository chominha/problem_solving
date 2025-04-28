#include <iostream>
#include <string>
#include <vector> 

int main()
{
    std::ios::sync_with_stdio(false); 
    std::cin.tie(NULL); 
    
    std::string str;
    int sum =0;
    std::cin>>str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') {
            sum += 3;
        }
        else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') {
            sum += 4;
        }
        else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') {
            sum += 5;
        }
        else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') {
            sum += 6;
        }
        else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') {
            sum += 7;
        }
        else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') {
            sum += 8;
        }
        else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') {
            sum += 9;
        }
        else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z') {
            sum += 10;
        }
    }

    std::cout << sum << "\n";
    
    

    return 0;
}
/*
1 -> 2초
2 -> A,B,C 3
3 -> D,E,F 4
4 -> G,H,I 5
5 -> J,K,L 6
6 -> M,N,O 7 
7 -> P,Q,R,S 8
8 -> T,U,V 9
9 -> W,X,Y,Z 10
0->
*/