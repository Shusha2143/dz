#include <iostream>
 
int main()
{   
    int num1;
    int mas[5];
    std::cout << "input pateznachnoe number: ";
    std::cin >> num1;
    if ((num1>99999) || (num1<10000))
    {
        std::cout << "vi vveli ne to chislo ";

    }
    else
    {
        int q = 10000;
        for (int i = 0; i < 5; i++) 
    {
        mas[i] = num1 / q;
        num1 = num1 - mas[i]*q;
        q = q / 10;
    }
    
    for(int i=0; i < 5; i++)
    {
        std::cout << mas[i] << std::endl;
    }

    }
}
