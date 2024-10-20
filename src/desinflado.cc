#include <iostream>

  int main() {
    char letra_mayuscula{0};
    std::cout << "introduzca letra mayuscula ";
    std::cin >> letra_mayuscula;
    char letra_minuscula = letra_mayuscula + 32;
    std::cout << letra_minuscula << std::endl;
    return 0;
}
