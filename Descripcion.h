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

class Descripcion { //Atributos
    private:
        int dias_sintomas;
        string explicacion;
    public: // Metodos
        Descripcion ();
        Descripcion(string, int); 
        void setPadecimiento (string);
        void setDias_sintomas (int);
        string getPadecimiento();
        int getDias_sintomas();
       
};

Descripcion::Descripcion(string pad, int dias){ //Constructor 
    explicacion = pad;
    dias_sintomas = dias;
}
Descripcion::Descripcion(){
    explicacion = "";
    dias_sintomas = 0;
}

// Establecer valores a los atributos

void Descripcion :: setDias_sintomas(int dias){
    dias_sintomas = dias;   
}

void Descripcion :: setPadecimiento (string pad){
   explicacion = pad;
}

//Mostrar información de las variables

string Descripcion::getPadecimiento (){
    return explicacion;
}

int Descripcion ::getDias_sintomas (){
    return dias_sintomas;
}