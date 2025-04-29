#include <iostream>
#include <vector>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n = 0, number = 0;
    std::string str, str2;
    std::vector<std::string> outputStr;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> number;
        std::cin >> str;

        str2 = "";  // <- 여기 추가!

        for (int i = 0; i < str.size(); i++) {
            for (int j = 0; j < number; j++) {
                str2 += str[i];
            }
        }
        outputStr.push_back(str2);
    }

    for (int i = 0; i < n; i++) {
        std::cout << outputStr[i] << "\n";
    }

    return 0;
}


/*
총 몇개의 string : n
몇 번 반복 : number
문자열 : str
벡터에 넣기 (n개) outputStr
초기화의 중요성!
*/