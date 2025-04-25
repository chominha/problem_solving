#include <iostream>

int main()
{
    int a; std::cin >> a;
    int b; std::cin >> b;
    int b100; b100=b/100;
    int b10; b10=(b-100*b100)/10;
    int b1; b1=b%10;
    std::cout << a*b1;
    std::cout << "\n";
    std::cout << a*b10;
    std::cout << "\n";
    std::cout << a*b100;
    std::cout << "\n";
    std::cout <<a*b;

    return 0;
}