#include <iostream>
#include <limits> // для std::numeric_limits

int main() 
{
    double num; 
    std::cout << "Input number: ";

    while (true) 
    {
        std::cin >> num;

        if (std::cin.fail()) 
        {
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "vvedeno ne chislo" << std::endl;
            return 0; 
        }

        if (num == static_cast<int>(num)) 
        {
            std::cout << "chislo tseloe" << std::endl; 
        } 
        else 
        {
            std::cout << "chislo ne tseloe" << std::endl; 
        }

        break; 
    }

    return 0;
}
