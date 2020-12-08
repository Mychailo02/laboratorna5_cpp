// ConsoleApplication19.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

 int main()
{
    int n, b, c;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите число n: ";
    std::cin >> n;
    for (int c = 1; c <= n; c++)// перебір всіх можливих значень a,b,c(a<=b<=c<=n)
    {
        for (int b = 1; b <= c; b++)
        {
            for (int a = 1; a <= b; a++)
            {
                if (a* a + b * b == c * c)//перевірка умови, чи є числа a, b, c піфагоровими трійками
                {
                    std::cout << a << " "<< b<<" "<< c<<std::endl;
                }
            }
        }
    }
}

