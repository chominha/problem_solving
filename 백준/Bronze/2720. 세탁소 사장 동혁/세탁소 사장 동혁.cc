#include <iostream>
#include <string>

int main()
{
    int T =0, money;
    std::cin>>T;
    for(int i=0; i<T; i++){
        int Quarter=0, Dime=0, Nickel=0, Penny=0;
        std::cin>>money;
        Quarter = money/25;
        Dime = (money-(Quarter*25))/10;
        Nickel = (money-(Quarter*25 + Dime*10))/5;
        Penny = money - (Quarter*25 + Dime*10 + Nickel*5);
        std::cout<< Quarter <<" "<<Dime<<" "<<Nickel<<" "<<Penny<<'\n';
    }
    return 0;
}
