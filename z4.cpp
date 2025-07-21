#include <iostream>
#include <limits> // Для std::numeric_limits

int main() 
{
    double num1, num2;

    std::cout << "vvedite pervoe chislo: ";
    while (!(std::cin >> num1)) 
    { 
        std::cout << "eto ne chislo. vvedite chislo" << std::endl;
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "vvedite pervoe chislo: ";
    }

    std::cout << "vvedite vtoroe chislo: ";
    while (!(std::cin >> num2)) 
    { 
        std::cout << "eto ne chislo. vvedite chislo" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        std::cout << "vvedite vtoroe chislo: ";
    }

    
    if (num1 > num2) 
    {
        std::cout << "bolshe" << std::endl;
    } 
    else if (num1 < num2) 
    {
        std::cout << "menshe" << std::endl;
    } 
    else 
    {
        std::cout << "chisla ravni" << std::endl;
    }

    return 0;
}
