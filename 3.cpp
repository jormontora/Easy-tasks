#include <iostream> //опять таки просто что бы работало

int main() {
    int a, b; //обьявляем переменные, и даем им числовой тип данных(о да, интеджер)

    // Запитуємо у користувача введення двох чисел
    std::cout << "Первое число на базу: "; //чисто спросили
    std::cin >> a; //чисто присвоили
    
    std::cout << "Второе число на базу: "; //чисто спросили
    std::cin >> b; //чисто присвоили

    //Делаем операции
    std::cout << "приплюсовывание: " << a + b << std::endl; //endl - обьявляем новую строку, чистим буфер вывода
    std::cout << "отнимание: " << a - b << std::endl;
    std::cout << "умножение: " << a * b << std::endl;

    return 0;
}
