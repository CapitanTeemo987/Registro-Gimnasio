#ifndef EXTENSIONCODO_H
#define EXTENSIONCODO_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class ExtensionCodo : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void ExtensionCodo::IngresarDatos(){
    std::cout<<"__Registro de Extension Codo__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void ExtensionCodo::GuardarEnArchivo(){
    std::ofstream archivoExtensionCodo;
    archivoExtensionCodo.open("C://Users//valen//Desktop//gym//Tricep//ExtensionCodo.txt", std::ios::out);

    if(archivoExtensionCodo.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoExtensionCodo << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoExtensionCodo.close();

    std::cout << "Datos guardados en ExtensionCodo!" << "\n\n";
}

#endif