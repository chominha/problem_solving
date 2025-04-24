#include <iostream>

using namespace std;

int main(){
    int a; std::cin >> a;
    int b; std::cin >> b;
    int c; std::cin >> c;
    std::cout << (a+b)%c << std::endl;
    std::cout << ((a%c)+(b%c))%c << std::endl;
    std::cout << (a*b)%c << std::endl;
    std::cout <<((a%c)*(b%c))%c <<std::endl;

}
