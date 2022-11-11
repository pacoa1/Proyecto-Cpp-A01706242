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