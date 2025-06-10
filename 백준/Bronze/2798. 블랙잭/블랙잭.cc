#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int one, two, num;
    std::cin >> one >> two;
    std::vector<int> answer;
    
    for(int i = 0; i < one; i++) {
        std::cin >> num;
        answer.push_back(num);
    }
    
    int closestSum = 0;
    for (int i = 0; i < answer.size() - 2; ++i) {
        for (int j = i + 1; j < answer.size() - 1; ++j) {
            for (int k = j + 1; k < answer.size(); ++k) {
                int currentSum = answer[i] + answer[j] + answer[k];
                if (currentSum <= two && currentSum > closestSum) {
                    closestSum = currentSum;
                }
            }
        }
    }
    
    std::cout << closestSum;
    
    return 0;
}