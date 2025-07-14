#include <bits/stdc++.h>
void star(std::vector<std::vector<char>>& map, int x, int y, int size) {
    if (size == 3) {
        map[x][y] = '*';
        map[x][y + 1] = '*';
        map[x][y + 2] = '*';
        map[x + 1][y] = '*';
        map[x + 1][y + 1] = ' ';
        map[x + 1][y + 2] = '*';
        map[x + 2][y] = '*';
        map[x + 2][y + 1] = '*';
        map[x + 2][y + 2] = '*';
        return;
    }

    int bnull = size / 3;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i == 1 && j == 1){ 
            continue; // 가운데는 비움
            }
            star(map, x + i * bnull, y + j * bnull, bnull);
        }
    }
}

int main()
{
    int num, k;
    std::cin>>num;
    for(int i=1; i<9; i++){
        if(pow(3,i)==num){
            k=i;
        }
    }

    std::vector<std::vector<char>> map(num, std::vector<char>(num, ' '));
    star(map, 0, 0, num);

    for (const auto& row : map) {
        for (char a : row) {
            std::cout << a;
        }
        std::cout << '\n';
    }

    return 0;
}