#include <bits/stdc++.h>

long long compute_gcd(long long one, long long two) {
    while (two != 0) {
        long long temp = two;
        two = one % two;
        one = temp;
    }
    return one;
}

int main() {
    long long one, two;
    std::cin >> one >> two;
    long long g = compute_gcd(one, two);
    long long lcm = one / g * two;
    std::cout << lcm;
    return 0;
}
