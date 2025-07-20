#include <bits/stdc++.h>

int main()
{
	int num;
	std::cin>>num;
	std::vector<int> x;
	std::vector<int> y;

	for(int i=0; i<num; i++) {
		int a, b;
		std::cin>>a>>b;
		x.push_back(a);
		y.push_back(b);
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	
	std::cout<<(x.back()-x.front())*(y.back()-y.front());

	return 0;
}