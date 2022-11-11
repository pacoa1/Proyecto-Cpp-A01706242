#include <iostream>
using namespace std;

class Persona { //Atributos
    private:
        string nombre;
        string sexo;
        int edad;
    public: // Metodos
        Persona (); //Constructor 
        void setPersona (string, string, int);
        string getPersonaName();
        string getPersonaSexo();
        int getPersonaEdad();
};

Persona::Persona(){
}

// Establecer valores a los atributos
void Persona :: setPersona(string _nom,string _se,int _ed){
    nombre = _nom;
    sexo = _se;
    edad = _ed;
}

//Mostrar información de las variables

string Persona::getPersonaName (){
    return nombre;
}

string Persona::getPersonaSexo (){
    return sexo;
}

int Persona::getPersonaEdad (){
    return edad;
}

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
void Sintomas:: setSintomas(string _pad,int _dias){
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

class Dosis{ //Atributos
    private:
        string Medicamento;
        float Cantidad;
    public: // Metodos
        Dosis (); //Constructor 
        void setDosis(string,float);
        string getDosisMedicamento();
        float getDosisCantidad();
};


Dosis::Dosis(){
}

// Establecer valores a los atributos
void Dosis:: setDosis(string _med,float _cant){
    Medicamento= _med;
    Cantidad = _cant;
}

//Mostrar información de las variables

string Dosis::getDosisMedicamento (){
    return Medicamento;
}

float Dosis::getDosisCantidad (){
    return Cantidad;
}

int main (){
    Persona p1;
    p1.setPersona("Paco","Masculino",17);
    cout<<p1.getPersonaName()<<endl;
    cout<<p1.getPersonaSexo()<<endl;
    cout<<p1.getPersonaEdad()<<endl;
    
    Sintomas s1;
    s1.setSintomas("Dolor garganta",6);
    cout<<s1.getSintomasPadecimiento()<<endl;
    cout<<s1.getSintomasDias_sintomas()<<endl;

    Dosis d1;
    d1.setDosis("Advil",12.8);
    cout<<d1.getDosisMedicamento()<<endl;
    cout<<d1.getDosisCantidad()<<endl;

    return 0;
}