#include <iostream> 
#include <string> 
int main() {
    std::cout << "Enter the name: "; 
    std::string name; 
    std::cin >> name; // забиваем переменную вводом из клавиатуры
    std::cout << "Hello, " << name << "!" << std::endl; 
    return 0; 
}

