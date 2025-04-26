#include <iostream>
#include <tuple>
#include <vector>

int main()
{
    std::vector<std::tuple<int, int>> v;
    int a, b, num=0;

    std::cin >> num;
    
    for (int i=0; i<num; i++){
        std::cin >> a >> b;
        v.push_back(std::make_tuple(a, b));
    }
    for (int i=0; i<num; i++){
        std::cout << "Case #"<<i+1<<": "<<std::get<0>(v[i]) << " + " << std::get<1>(v[i]) << " = " << (std::get<0>(v[i]) + std::get<1>(v[i])) << '\n';
    }

    return 0;
}


/*
a+b 출력
*/