#include <iostream>
 
  int main() {
     int a{0}, b{0};
     std::cout << "Introduzca un número: ";
     std::cin >> a;
     std::cout << "Introduzca un número: ";
     std::cin >> b;

     std::cout << a << " + " << b << " = " << a + b << std::endl;
     std::cout << a << " - " << b << " = " << a - b << std::endl;
     std::cout << a << " * " << b << " = " << a * b << std::endl;
     std::cout << a << " / " << b << " = " << a / b << std::endl;
     std::cout << a << " % " << b << " = " << a % b << std::endl;

     std::cout << a << " == " << b << " = " << (a == b) << std::endl;
     std::cout << a << " != " << b << " = " << (a != b) << std::endl;
     std::cout << a << " < " << b << " = " << (a < b) << std::endl;
     std::cout << a << " > " << b << " = " << (a > b) << std::endl;
     std::cout << a << " <= " << b << " = " << (a <= b) << std::endl;
     std::cout << a << " >= " << b << " = " << (a >= b) << std::endl;
     return 0;
  }
