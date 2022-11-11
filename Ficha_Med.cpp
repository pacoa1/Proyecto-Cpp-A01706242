#include <iostream>
#include "dosis.h"
#include "Personas.h"
#include "sintomas.h"
using namespace std;

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
