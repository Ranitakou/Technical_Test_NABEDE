#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            std::cout << "Hello";
        }
        if (i % 5 == 0) {
            std::cout << "World";
        }
        if (i % 7 == 0) {
            std::cout << "Yoo";
        }
        if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
            std::cout << i;
        }
        std::cout << std::endl;
    }
    return 0;
}
