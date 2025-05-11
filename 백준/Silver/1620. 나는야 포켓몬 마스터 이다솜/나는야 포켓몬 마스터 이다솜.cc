#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

int main()
{
    int libraryNum = 0, myNum = 0;
    std::cin >> libraryNum >> myNum;

    std::string name;
    std::string yourInput;
    std::map<int, std::string> pokemonMap1;
    std::map<std::string, int> pokemonMap2;
    std::vector<std::string> answer;

    for (int i = 1; i <= libraryNum; i++) {
        std::cin >> name;
        pokemonMap1.insert({i, name});
        pokemonMap2.insert({name, i});
    }

    for (int i = 0; i < myNum; i++) {
        std::cin >> yourInput;

        if (std::isdigit(yourInput[0])) {
            int index = std::stoi(yourInput);
            answer.push_back(pokemonMap1[index]);
        } else {
            answer.push_back(std::to_string(pokemonMap2[yourInput]));
        }
    }

    for (const auto& a : answer) {
        std::cout << a << "\n";
    }

    return 0;
}

/*
isdigit(ch) : 문자가 숫자인지 확인(문자 하나만 검사!)
stoi(str) : 문자열을 정수로 변환
to_string : 정수를 문자열로 변환

자료형에 상관없이 저장!
std::vector<std::any> : 안전하진 않아
using VarType = std::variant<int, double, std::string>;
std::vector<VarType> list; : 특정 자료형만 안전.
chat gpt방법 : map 두개써서 <int,string>이랑 <string,int> 두개 만들어라.(시간복잡도 차이)
*/