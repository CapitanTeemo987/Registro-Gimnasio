#ifndef PRESSSENTADO_H
#define PRESSSENTADO_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PressSentado : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PressSentado::IngresarDatos(){
    std::cout<<"__Registro de Press Sentado__" << "\n\n";
    std::cout << "Ingrese el peso contando la barra (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PressSentado::GuardarEnArchivo(){
    std::ofstream archivoPressSentado;
    archivoPressSentado.open("C://Users//valen//Desktop//gym//Pecho//PressSentado.txt", std::ios::out);

    if(archivoPressSentado.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPressSentado << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPressSentado.close();

    std::cout << "Datos guardados en PressSentado!" << "\n\n";
}

#endif