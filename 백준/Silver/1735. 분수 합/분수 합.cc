#include <iostream>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
//b==0이 될때까지 반복한다. 

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    int one = a * d + b * c;  
    int two = b * d;        

    int g = gcd(one, two);  

    std::cout << one / g << " " << two / g << "\n"; 
    return 0;
}
