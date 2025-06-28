#include <bits/stdc++.h>

bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
	int one, two;
	std::cin>>one>>two;
	int answer=0, min=-1;
	for(int i=one; i<=two; i++) {
		if (is_prime(i)) {
            answer += i;
            if (min == -1) min = i;
        }
    }

    if (min == -1) {
        std::cout << -1 << "\n";
    } else {
        std::cout << answer << "\n";
        std::cout << min;
    }

    return 0;
}