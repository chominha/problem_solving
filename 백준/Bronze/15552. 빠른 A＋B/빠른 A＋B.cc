#include <iostream>
#include <tuple>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false); //C 입출력이랑 끊고 cin/cout만 빠르게
    std::cin.tie(NULL); //cout 기다리지 말고 cin 입력 바로 받기
    
    std::vector<std::tuple<int,int>> v;
    int num=0, a=0, b=0; 
    std::cin>>num;
    for(int i=0; i<num; i++){
        std::cin >> a>>b;
        v.push_back(std::make_tuple(a,b));
    }
    
    for (int i=0; i<num; i++){
        std::cout<<(std::get<0>(v[i]) + std::get<1>(v[i])) <<"\n";
    }

    return 0;
}

/*
(원래)         cin -> cout 대기 -> 입력
(sync false)   cin -> C랑 연결 끊기 (scanf X)
(cin.tie NULL) cin -> cout 안 기다림 → 더 빠름!
--
간단 정리
구분	 특징	                      속도
endl	줄바꿈 + 버퍼비우기(느림)	  느림
\n	    줄바꿈만(버퍼 안 비움)	      빠름
*/