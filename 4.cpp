#include <iostream>

int main() {
    
    double A, B, C; //double - десятичные числа

    //вкидываем размеры
    std::cout << "длинна (A): ";
    std::cin >> A;
    
    std::cout << "Шырина (B): ";
    std::cin >> B;
    
    std::cout << "Высота(C): "; 
    std::cin >> C;

    
    double volume = A * B * C; //обьем
    
    //площадь поверхности
    double surface = 2 * (A * B + A * C + B * C);

    //Выводим результат
    std::cout << "обьем: " << volume << std::endl;
    std::cout << "Площадь поверхности: " << surface << std::endl;

    return 0;
}
