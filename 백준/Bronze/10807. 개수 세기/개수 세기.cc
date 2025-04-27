#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    int num=0, count=0; 
    std::cin>>count;
    
    std::vector<int> numList(count);
    for (int i = 0; i < count; i++) {
        std::cin >> numList[i];
    }
    std::cin >> num;

    int result = 0;
    for (int i = 0; i < count; i++) {
        if (numList[i] == num) {
            result += 1;
        }
    }
    std::cout<< result;
    
}

/*
몇개 받을건가 => count
숫자들 받기 => list
찾을 숫자 => num
몇개인지 출력 => result
-----
list는 배열처럼 numList[i] 못 써. (인덱스 없음)
대신 for (auto it = list.begin(); it != list.end(); ++it)
*/