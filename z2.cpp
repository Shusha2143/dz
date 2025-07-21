#include <iostream>
#include <cstdlib> // Для функции rand() и srand()
#include <ctime>   // Для функции time()

int main() {
    const int num = 5; 
    int mas[num];    

    std::srand(static_cast<unsigned int>(std::time(0)));

    for (int i = 0; i < num; i++) 
    {
        mas[i] = std::rand() % 201 +(-100) ; 
    }

    int MaxEl = 0;

    for (int i = 0; i < num; i++) //поиск макс элемента
    {
        if (mas[i] > MaxEl)
        {
            MaxEl = mas[i];
        }
    }

    int k = 0;

    for (int j = 0; j < num; j++) //сортировка
    {
        int l = 0;
        int MaxEl1 = -200;
        for (k; k < num; k++) 
        {
            if (mas[k] > MaxEl1)
            {
                MaxEl1 = mas[k];
                l=k;
            }
        }
        mas[l] = mas[j];
        mas[j] = MaxEl1;
        k = j+1;
    }

    for(int i=0; i < num; i++)
    {
        std::cout << mas[i] << std::endl;
    }

}