
/*
 * Proyecto Ficha_Med
 * Francisco Rafael Arreola Corona
 * A01706242
 * 02/12/22
 */

/**
 * Este proyecto es un programa que le ayuda a un doctor
 * Ingresando los datos básicos del paciente para poder crear 
 * Un posible tratamiento para el paciente
*/

#include <string>
using namespace std;
class Tratamiento { //Atributos
    private:
        string Medicamento;
        float Cantidad;
    public: // Metodos
        Tratamiento ();
        Tratamiento(string,float); 
        void setMedicamento (string);
        void setCantidad (float);
        string getMedicamento();
        float getCantidad();
};


Tratamiento::Tratamiento(string med,float cant){ //Constructor
    Medicamento = med;
    Cantidad = cant;
}
Tratamiento::Tratamiento (){
    Medicamento = "";
    Cantidad = 0;
}
// Establecer valores a los atributos
void Tratamiento:: setMedicamento(string med){
    Medicamento = med;  
}
void Tratamiento :: setCantidad(float cant){
    Cantidad = cant; 
}

//Mostrar información de las variables

string Tratamiento::getMedicamento (){
    return Medicamento;
}

float Tratamiento::getCantidad (){
    return Cantidad;
}