#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int coornum=0, num=0;
    std::cin>>coornum;
    
    std::vector<int> origvec;
    std::vector<int> sortedvec;
    std::map<int, int> origmap;
    
    for(int i=0; i<coornum; i++){
        std::cin>>num;
        origvec.push_back(num);
    }
    
    sortedvec = origvec;
    //정렬, 중복제거
    std::sort(sortedvec.begin(), sortedvec.end());
    //unique() 중복을 앞쪽에 정리, 뒤쪽은 쓰레기 값
    //.erase()로 뒤쪽 쓰레기 값 정리
    sortedvec.erase(std::unique(sortedvec.begin(), sortedvec.end()), sortedvec.end());

    for(int i=0; i<sortedvec.size(); i++){
        origmap[sortedvec[i]] =i;
    }
    for(int a:origvec){
        std::cout << origmap[a] << " ";
    }
    
    
    

    return 0;
}
/*
sort로 정리(중복제거)하고 인덱스 반환

문제 이해 불가했다.
좌표 압축은 원래 값의 상대적 크기만 필요할 때 사용
압축 방법 : 정렬했을 때 몇번째로 작은 수인지 출력.
숫자의 절대값이 아니라, 상대적인 순위만 중요
*/