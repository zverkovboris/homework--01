#include<iostream>
#include<math.h>

int main() {
    // variant 7(task 10,15)
    // task 10
    std::cout << "print 4 signed number a1a2a3a4" << std::endl;
    int o = 0;
    std::cin >> o;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    a1 = o - (o / 10) * 10;
    a2 = (o / 10) - (o / 100) * 10;
    a3 = (o / 100) - (o / 1000) * 10;
    a4 = o / 1000;
    std::cout << "summ=a1+a2+a3+a4=" << a1 + a2 + a3 + a4 << std::endl;
    std::cout << "a1*a2*a3*a4=" << a1*a2*a3*a4 << std::endl;
    // //////////////////////
    // task 15
    int z = 237;
    int x3 = z / 100;
    int x12 = z - z / 100 * 100;
    std::cout << "x=" << x12 * 10 + x3 << std::endl;
return 0;
}
