#include <iostream>
 
int main()
{   
    int num1;
    int num2;
    int num3;
    std::cout << "input first number: ";
    std::cin >> num1;
    std::cout << "Input second number: ";
    std::cin >> num2;
    num3 = num1 + num2;
    std::cout <<  num3  << std::endl;
    if ((num3 % 2) == 0)
    {
        std::cout <<  "chotnoe"  << std::endl;
    }
    else
    {
        std::cout <<  "nechotnoe"  << std::endl;
    }
}