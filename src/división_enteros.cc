#include <iostream>

  int main() {
    int a{0}, b{0}, d, r;
    std::cin >> a;
    std::cin >> b;
    if (b > 0) {
      d = a / b;
      r = a % b;
      std::cout << d << " " << r << std::endl;
    } else {
      exit(0);
    }
    return 0;
}
