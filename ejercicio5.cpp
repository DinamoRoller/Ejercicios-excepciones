#include<iostream>
#include<stdexcept>
using namespace std;

void lanzaExcepcion(){
    throw runtime_error("Ha ocurrido un error en la funcion lanzaExcepcion");
}
int main(){
try {
    try{
        lanzaExcepcion();
    }
    catch(const runtime_error& e){
        cout<<"Excepcion capturada. Reactivando... "<<e.what()<<endl;
        throw;
    }
}
catch(const runtime_error& e){
    cout<<"Excepcion capturada: "<<e.what()<<endl;
}
    return 0;
}