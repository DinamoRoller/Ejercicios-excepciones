#include<iostream>
bool errorFlag = false;

int divide(int a, int b) {
    if (b == 0) {
        errorFlag = true;
        return 0;
    }
    else {
        return a / b;
    }
}
int main() {
     int result = divide(5,  0);

    // Se verifica regularmente la bandera de error
    if (errorFlag) {
        std::cout << "Ocurrio un error: division por cero." << std::endl;
        // Se maneja el error y se reinicia la bandera
        errorFlag = false;
    }

    return 0;
}