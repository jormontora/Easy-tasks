#include <iostream> //вывод
#include <string> //анализ строки(библиотека)

int main() {
    std::cout << "Enter the name: "; // выводим на экранчик std::cout - отвечает за вывод в терминал
    std::string name; // создаем строку
    std::cin >> name; // забиваем переменную вводом из клавиатуры
    std::cout << "Hello, " << name << "!" << std::endl; // endl - перенос строки (выводим на экранчик) 
    return 0; // конец
}

