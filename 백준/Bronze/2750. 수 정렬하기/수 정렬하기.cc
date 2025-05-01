#include <iostream>
#include <vector>

int main()
{
    int num = 0;
    std::cin >> num;

    std::vector<int> numlist(num); 

    for(int i = 0; i < num; i++) {
        std::cin >> numlist[i];
    }

    for(int j = 0; j < num; j++) {
        for(int i = 0; i < num - 1; i++) {
            if(numlist[i] > numlist[i + 1]) {
                int temp = numlist[i];
                numlist[i] = numlist[i + 1];
                numlist[i + 1] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++) {
        std::cout << numlist[i] << '\n';
    }

    return 0;
}
