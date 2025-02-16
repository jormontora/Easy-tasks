#include <iostream> 

int main() {
    int a, b; 

    // Запитуємо у користувача введення двох чисел
    std::cout << "Первое число на базу: "; 
    std::cin >> a; 
    
    std::cout << "Второе число на базу: "; 
    std::cin >> b; 

    //Делаем операции
    std::cout << "приплюсовывание: " << a + b << std::endl; 
    std::cout << "отнимание: " << a - b << std::endl;
    std::cout << "умножение: " << a * b << std::endl;

    return 0;
}
