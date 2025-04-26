#include <iostream>
#include <tuple>
#include <vector>

int main()
{
    std::vector<std::tuple<int, int>> v;
    int a, b;
    while (std::cin >> a >> b) {
        if(a==0 && b==0){
            break;
        }
        v.push_back(std::make_tuple(a, b));
        
    }
    for (auto t : v) {
        std::cout << (std::get<0>(t) + std::get<1>(t)) << '\n';
    }

    return 0;
}


/*
a+b 출력
*/