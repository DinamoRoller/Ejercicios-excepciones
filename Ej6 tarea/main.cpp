#include <iostream>
#include <stdexcept>

void throwUncaughtException() {
    std::cout << "Dentro de throwUncaughtException()" << std::endl;
    throw std::runtime_error("Excepcion no capturada");
}

int main() {
    std::cout << "Dentro de main()" <<std::endl;

    try {
        throwUncaughtException();

    } catch (const std::exception& e) {
        std::cerr << "Exception capturada:" << e.what() << std::endl;
    }

    return 0;
}