#include <bits/stdc++.h>

int total=0, a, b;
std::vector<std::vector<int>> answer;
void hanoi(int num, int from, int via, int to){
    if(num == 1){
        answer.push_back({from, to});
        total+=1;
        return;
    }else{
        hanoi(num-1, from, to, via);
        answer.push_back({from, to});
        total +=1;
        hanoi(num-1, via, from, to);
    }

}

int main()
{
    int num;
    std::cin>>num;
    hanoi(num, 1,2,3);
    std::cout<<total<<"\n";
    for (const auto& move : answer) {
    std::cout << move[0] << " " << move[1] << "\n";
}
    

    return 0;
}

