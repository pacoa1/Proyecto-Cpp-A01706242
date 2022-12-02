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
 * Además de que le arroja al doctr una breve explicación de los síntomas
*/


#include <iostream> // Para imprimir
#include "Tratamiento.h" // Donde están los objetos de mi proyecto
#include "Personas.h" // Donde están los objetos de mi proyecto
#include "Descripcion.h" // Donde están los objetos de mi proyecto
using namespace std;

int main (){
    Persona p1("","",0,0,"");
    string nombre;
    string sexo;
    int edad;
    float temperatura;
    string Sintoma;

    cout<<"Nombre del paciente:  ";
    getline(cin,nombre); //Funciona para lograr capturar toda la información escrita por el usuario

    cout<<"Sexo del paciente: ";
    cin>>sexo;

    cout<<"Edad del paciente: ";
    cin>>edad;

    cout<<"Temperatura del paciente: ";
    cin>>temperatura;
    p1. setTemperatura (temperatura);
    if (p1.getTemperatura () < 37.0) {

        cout<< "El paciente tiene temperatura normal"<<endl;
    }
     if (p1.getTemperatura () > 37.0) {

        cout<< "El paciente tiene la temperatura alta"<<endl;
    }


    p1.setNombre(nombre);
    p1.setSexo(sexo);
    p1.setEdad(edad);
    p1.setTemperatura(temperatura);
    p1.setSintoma(Sintoma);

 
    Descripcion d1("",0); 
    string explicacion;
    int dias_sintomas;

    cout<< "Explica la enfermedad del paciente: ";
    getline(cin,explicacion); //Funciona para lograr capturar toda la información escrita por el usuario
    getline(cin,explicacion);
   
    d1.setPadecimiento (explicacion);
    d1.setDias_sintomas (dias_sintomas);

    cout << " 1.- Dolor de cabeza " <<endl; // Funciona para desplegar un menú interactivo en pantalla para el usuario
    cout << " 2.- Dolor de garganta " <<endl;
    cout << " 3.- Dolor de estómago " <<endl;
    cout << " 4.- Dolor muscular " <<endl;
    cout << " 5.- Dolor ocular " <<endl;
    cout << " 6.- Dificultad al respirar " <<endl;

    int  num = 0;
    while (num < 1 || num > 6)
    {
        printf ( "Escoja el número del sintoma que presenta: ");  //Funciona para poder almacenar la respuesta del usuario y con esto poder tener un switch funcional
        scanf ( "%i", &num );
        switch (num){ //Funciona para poder realizar el menú interactivo
        case 1: printf ( "Es causado por tensión muscular en los hombros, el cuello, el cuero cabelludo y la mandíbula. Una cefalea tensional: Puede estar relacionada con el estrés, la depresión, la ansiedad, un traumatismo craneal o sostener la cabeza y el cuello en una posición anormal. Tiende a darse en ambos lados de la cabeza.\n"); break;
        case 2: printf ( "El dolor de garganta puede ser un síntoma de infección de garganta por estreptococos, un resfriado común, alergias u otra afección de las vías respiratorias superiores. Los síntomas de los dolores de garganta causados por un virus y los causados por bacterias Streptococcus del grupo A son similares.\n" ); break;
        case 3: printf ( "El dolor abdominal es un síntoma de diferentes enfermedades. Es el dolor que se siente en la zona situada entre el pecho y la ingle. Se produce por diferentes causas, las principales son: el estreñimiento, el síndrome del intestino irritable, alergias o intolerancias alimentarias o una intoxicación alimentaria.\n" ); break;
        case 4: printf ( "El dolor muscular a menudo está muy relacionado con tensión, sobrecarga o lesión muscular por el ejercicio o el esfuerzo físico. El dolor muscular tiende a comprometer a músculos específicos, comienza durante o justo después de la actividad. A menudo la actividad que causa el dolor es bastante obvia.\n" ); break;
        case 5: printf ( "El dolor ocular superficial a menudo está relacionado con un cuerpo extraño en el ojo, una infección ocular o cualquier cosa que irrite o inflame la membrana que cubre la superficie del ojo. También podrías describir que el dolor ocular se origina en el interior del ojo como una palpitación o dolor leve y continuo.\n" ); break;
        case 6: printf ( "La dificultad respiratoria es una afección que involucra una sensación de dificultad o incomodidad al respirar o la sensación de no estar recibiendo suficiente aire. Algunas personas pueden sentirse disneicas con sólo ejercicio leve (por ejemplo, subir escaleras), aunque no padezcan un trastorno específico. \n" ); break;
        default: printf ( "Ingrese un numero del 1 al 6 \n " );
    }
    }

    Tratamiento t1("",0);
    string Medicamento;
    float Cantidad;

    cout<<"¿Que prefiere el paciente? Pastilla o Inyeccion: ";
    cin>>Medicamento;
    t1.setMedicamento(Medicamento);
    if (t1.getMedicamento () == "Pastilla"){

        cout << "La cantidad será en unidades"<<endl;
    }

    if (t1.getMedicamento () == "Inyeccion"){

        cout << "La cantidad será en mililitros"<<endl;
    }

    if (num == 1){
        cout << "Se receta tomar una tableta de aspirina cada 8 horas por tres dias"<<endl;
    }
   else if (num==2)
   {
    cout << "Se receta tomar una tableta de advil cada 8 horas por cinco dias"<<endl;
   }
   else if (num==3)
   {
    cout << "Se receta tomar una tableta de Treda cada 8 horas por tres dias"<<endl;
   }
   else if (num==4)
   {
    cout << "Se receta tomar una tableta de Diclofenaco Oftalmico cada 12 horas por cinco dias"<<endl;
   }
   else if (num==5)
   {
    cout << "Se receta tomar una tableta de Desiprmina cada 8 horas por tres dias"<<endl;
   }
   else if (num==6)
   {
    cout << "Se receta tomar una tableta de Albuterol cada 8 horas por tres dias"<<endl;
   }
   else {
    cout << "No escogiste ninguna opcion"<<endl;
   }
   
    t1.setMedicamento(Medicamento);
    t1.setCantidad(Cantidad);

    cout<<("REPORTE FINAL DEL PACIENTE")<<endl;
    cout<<p1.getPersonaName()<<endl;
    cout<<p1.getPersonaSexo()<<endl;
    cout<<p1.getPersonaEdad()<<endl;
    cout<<p1.getTemperatura()<<endl;
    cout<<d1.getPadecimiento()<<endl;

    if (num == 1){
        cout << "Se receta tomar una tableta de aspirina cada 8 horas por tres dias";

    }
   else if (num==2)
   {
    cout << "Se receta tomar una tableta de advil cada 8 horas por cinco dias";
   }
   else if (num==3)
   {
    cout << "Se receta tomar una tableta de Treda cada 8 horas por tres dias";
   }
   else if (num==4)
   {
    cout << "Se receta tomar una tableta de Diclofenaco Oftalmico cada 12 horas por cinco dias";
   }
   else if (num==5)
   {
    cout << "Se receta tomar una tableta de Desiprmina cada 8 horas por tres dias";
   }
   else if (num==6)
   {
    cout << "Se receta tomar una tableta de Albuterol cada 8 horas por tres dias";
   }
   else {
    cout << "No escogiste ninguna opcion";
   }
    return 0;
}


