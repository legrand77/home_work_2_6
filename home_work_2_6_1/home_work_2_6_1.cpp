#include <cstdlib>
#include <string>
#include <iostream>
#define MODE 1
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
#ifdef MODE
#if MODE == 0
        std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
#include "add.h"
     double x{};
     double y{};
     std::cout << "Работаю в боевом режиме" << std::endl;
     std::cout << "Введите число 1: ";
     std::cin >> x;
     std::cout << "Введите число 2: ";
     std::cin >> y;
     std::cout << "Результат сложения: " << add(x,y) << std::endl;
#endif
#endif
#ifndef MODE
#error Необходимо определить MODE
#endif
}



