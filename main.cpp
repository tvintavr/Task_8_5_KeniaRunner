#include <iostream>
#include <cmath>
#include <windows.h>
#include <limits>
#include <numeric>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /* Проверка ввода данных (справочно)
    while(true)
    {
        float value; // попробуйте разные типы данных
        std::cin >> value;

        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cerr << "Ошибка ввода данных\n";

            // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            // Если нужно прервать программу:
            // return 1; // выход из функции main, соответственно и из программы
            // exit(1); // а так можно выйти из программы в любом месте
            // цифры - это номера ошибок передаваемые программой в ОС,
            // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
        }
        else
            std::cout << value << '\n';
    }

    return 0;
     */
    float loopTime,allTime;
    float kmf;
    int km,k;
    while (true) {
        loopTime=0;
        allTime=0;
        std::cout<<"Ввод:\n";
        std::cout<<"Привет, Сэм! Сколько километров ты сегодня пробежал? (км, >0): ";
        std::cin>>kmf;
        if (kmf<=0 || std::cin.fail() || std::cin.peek() != '\n') {
            std::cout << "Ошибка ввода данных\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            km=(int) std::ceil(kmf);
            for (k=1;k<=km;k++) {
                std::cout<<"Какой у тебя был темп на километре "<<k<<"?: ";
                std::cin>>loopTime;
                allTime+=loopTime;
            }
            std::cout<<"Вывод:\n";
            std::cout<<"Твой средний темп за тренировку: "<<(int) (allTime/60/kmf)<<" минуты "<<int(allTime/kmf) % int (60)<<" секунд.\n";
        }


    }
}