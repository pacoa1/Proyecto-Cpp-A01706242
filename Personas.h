#include <string>
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