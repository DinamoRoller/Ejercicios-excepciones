#include <iostream>
#include <stdexcept>
#include <fstream>

int escribeArchivo(std::ofstream& file) {
    if (!file.is_open()){
        throw std::runtime_error("No se puede escribir");
    }
    file << "Algo escrito";
    return 0;
}

int main(){
    std::ofstream file("VivaLaVida.txt");
    if (file.is_open()){
        file.close();
    }
    try{
        escribeArchivo(file);
    }
    catch (std::runtime_error& e){          std::cout << "Excepcion: \n" << e.what() << std::endl;
    }
    if (file.is_open()){
        file.close();
    }
    return 0;
}