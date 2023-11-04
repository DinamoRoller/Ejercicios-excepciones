#include<iostream>
#include<stdexcept>

// Versión de la función que devuelve un valor de error
int divideError(int a, int b) {
    if (b == 0) {
        return -1; // valor de error
    }
    else {
        return a / b;
    }
}

// Versión de la funcion que lanza una excepcion
int divideException(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division por cero"); // lanza una excepción
    }
    else {
        return a / b;
    }
}

int main() {
    // Uso de la version que devuelve un valor de error
    int resultError = divideError(5, 0);
    if (resultError == -1) {
        std::cout << "Error: division por cero." << std::endl;
    }

    // Uso de la version que lanza una excepcion
    try {
        int resultException = divideException(5, 0);
    }
    catch (const std::invalid_argument& e) {
        std::cout << "Excepcion: " << e.what() << std::endl;
    }

    return 0;
}