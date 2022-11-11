#include <string>
using namespace std;

class Sintomas{ //Atributos
    private:
        string padecimiento;
        int dias_sintomas;
    public: // Metodos
        Sintomas (); //Constructor 
        void setSintomas (string,int);
        string getSintomasPadecimiento();
        int getSintomasDias_sintomas();
};

Sintomas::Sintomas(){
}

// Establecer valores a los atributos
void Sintomas :: setSintomas(string _pad,int _dias){
    padecimiento = _pad;
    dias_sintomas = _dias;
}

//Mostrar información de las variables

string Sintomas::getSintomasPadecimiento (){
    return padecimiento;
}

int Sintomas::getSintomasDias_sintomas (){
    return dias_sintomas;
}