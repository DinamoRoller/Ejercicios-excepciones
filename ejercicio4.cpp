#include<iostream>
#include<exception>
#include <string>
using namespace std;

class MiExcepcion: public exception{
private:
    string mensaje;
public:
    explicit MiExcepcion(const string& msg): mensaje(msg){}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};
void lanzaExcepcion(){
    throw MiExcepcion("Ha ocurrido un error en la funcion lanzaExcepcion");
}
int main(){
try{
    lanzaExcepcion();
}catch(const MiExcepcion& e){
    cout<<"Excepcion capturada: "<<e.what()<<endl;
}
    return 0;
}


