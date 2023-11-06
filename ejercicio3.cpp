#include <iostream>
#include <stdexcept>

void throwException() {
    std::cout << "Dentro de throwException()" << std::endl;
    throw std::runtime_error("Esto es una excepcion");
}

void callThrowException() {
    std::cout << "Dentro de callThrowException()" << std::endl;
    throwException();
}

void callCAllThrowException() {
    std::cout << "Dentro de callCallThrowException()" << std::endl;
    callThrowException();
}

int main() {
    try {
        std::cout << "Dentro de main()" << std::endl;
        callCAllThrowException();
    }catch (const std::exception & e) {
        std::cerr << "Excepcion capturada:" << e.what() << std::endl;
    }

    return 0;
}