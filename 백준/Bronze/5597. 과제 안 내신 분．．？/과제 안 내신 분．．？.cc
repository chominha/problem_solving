#include <iostream>
#include <map>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int a=0, b=0;
    std::map<int, int> doneList;
    for(int i=0; i<30; i++){
        doneList[i+1] = 0;
    }
    for(int i=0; i<28; i++){
        std::cin >> a;
        doneList[a] = 1;
    }
    for (auto it = doneList.begin(); it != doneList.end(); ++it) {
        if (it->second == 0) {
            std::cout << it->first << "\n"; 
        }
    }

    return 0;
}

/*
30명 중 과제 제출 안한 학생 번호 찾기
---
vector로 쓰는 법
std::vector<int> students(31, 0); // 1번부터 30번까지 쓸 거라서 크기 31 (0번은 버림)

    int a = 0;
    for (int i = 0; i < 28; i++) {
        std::cin >> a;
        students[a] = 1; // 제출한 사람 표시
    }

    for (int i = 1; i <= 30; i++) {
        if (students[i] == 0) { // 제출 안 한 사람
            std::cout << i << "\n";
        }
    }
*/