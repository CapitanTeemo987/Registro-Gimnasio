#ifndef EXTENSIONCODOA_H
#define EXTENSIONCODOA_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class ExtensionCodoA : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void ExtensionCodoA::IngresarDatos(){
    std::cout<<"__Registro de Extension Codo Arriba__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void ExtensionCodoA::GuardarEnArchivo(){
    std::ofstream archivoExtensionCodoA;
    archivoExtensionCodoA.open("C://Users//valen//Desktop//gym//Tricep//ExtensionCodoA.txt", std::ios::out);

    if(archivoExtensionCodoA.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoExtensionCodoA << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoExtensionCodoA.close();

    std::cout << "Datos guardados en ExtensionCodoA!" << "\n\n";
}

#endif