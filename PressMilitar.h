#ifndef PRESSMILITAR_H
#define PRESSMILITAR_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PressMilitar : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PressMilitar::IngresarDatos(){
    std::cout<<"__Registro de Press Militar__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PressMilitar::GuardarEnArchivo(){
    std::ofstream archivoPressMilitar;
    archivoPressMilitar.open("C://Users//valen//Desktop//gym//Hombro//PressMilitar.txt", std::ios::out);

    if(archivoPressMilitar.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPressMilitar << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPressMilitar.close();

    std::cout << "Datos guardados en PressMilitar!" << "\n\n";
}

#endif