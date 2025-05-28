#include <iostream>
#include <string>
#include <iomanip>

int main() {
    std::string subject, grade;
    double credit, total = 0.0, total_credit = 0.0;

    for (int i = 0; i < 20; ++i) {
        std::cin >> subject >> credit >> grade;

        double score = 0.0;
        if (grade == "A+") score = 4.5;
        else if (grade == "A0") score = 4.0;
        else if (grade == "B+") score = 3.5;
        else if (grade == "B0") score = 3.0;
        else if (grade == "C+") score = 2.5;
        else if (grade == "C0") score = 2.0;
        else if (grade == "D+") score = 1.5;
        else if (grade == "D0") score = 1.0;
        else if (grade == "F")  score = 0.0;
        else if (grade == "P")  continue;

        total += credit * score;
        total_credit += credit;
    }
//fixed 고정 setprecision 6자리.
    std::cout << std::fixed << std::setprecision(6);
    if (total_credit == 0.0)
        std::cout << 0.0 << "\n";
    else
        std::cout << total / total_credit << "\n";

    return 0;
}
