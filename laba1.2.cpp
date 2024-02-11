// laba1.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <math.h>
#include <iostream>
using namespace std;


int main()
{
setlocale(LC_ALL, "RU");
    float x;
    cout << "Введите х: ";
    cin >> x;
    if (cin.fail())
    {
        cout << "Введите число" << endl;
        cin.clear();
        while (cin.get() != '\n');
        return 0;
    }
    if (x > 7.7)
    {
        cout << "Ответ:" << (log(x) * sin(3 * x));
    }
    if (x == 7.7)
    {
        cout << "Ответ: " << (pow(sqrt(pow(x, 5.0) - 1), 5.0));
    }
    if (x < 7.7)
    {
        cout << "Ответ: " << (1 + pow(cos(2 * x), 3.0) - 3 * pow(sin(3 * x), 2.0));

    }
    return 0;
}

