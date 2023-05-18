#include <iostream>
#include "Counter.h"

int main() {
    setlocale(LC_ALL, "Russian");
    int init_val = 0;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string ans;
    std::cin >> ans;
    if (ans == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> init_val;
    }
    Counter counter(init_val);
    char input;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> input;
        switch (input) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.getValue() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            break;
        default:
            std::cout << "Неправильный ввод!" << std::endl;
        }
    } while (input != 'x');

    return 0;
}