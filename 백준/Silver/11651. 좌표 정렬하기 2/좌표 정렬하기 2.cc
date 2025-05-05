#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n = 0;
    std::cin >> n;

    int a = 0, b = 0;
    std::vector<std::pair<int, int>> intlist(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        intlist[i] = {a, b};
    }
    std::sort(intlist.begin(), intlist.end(), [](const std::pair<int, int>& x, const std::pair<int, int>& y) {
    if (x.second == y.second) return x.first < y.first;
    return x.second < y.second;
});


    for (auto& p : intlist)
        std::cout << p.first << " " << p.second << "\n";

    return 0;
}
