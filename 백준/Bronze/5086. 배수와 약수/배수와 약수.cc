#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> answer;
    
    while (1) {
        int one, two;
        std::cin >> one >> two;

        if (one == 0 && two == 0) {
            break;
        }

        if (two % one == 0) {
            answer.push_back("factor");
        } else if (one % two == 0) {
            answer.push_back("multiple");
        } else {
            answer.push_back("neither");
        }
    }

    for (const std::string& str : answer) {
        std::cout << str << "\n";
    }

    return 0;
}
