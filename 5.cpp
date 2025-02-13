#include <iostream>
#include <iomanip> //для настройки формата вывода

int main() {
    double R; 
    const double pi = 3.14; //константа пи 

    
    std::cout << "Введите радиус(R): ";
    std::cin >> R; //передаем значение в переменную

    
    double ploshyad = pi * R * R; 
    double circumLength = 2 * pi * R;

    // fixed - фиксированное количество знаков после запятой. setprecision - количество знаков после запятой
    std::cout << std::fixed << std::setprecision(2);

    // вывод
    std::cout << "Площадь: " << ploshyad << std::endl;
    std::cout << "Длинна круга: " << circumLength << std::endl;

    return 0;
}
