#ifndef ELEVACIONESLATERALES_H
#define ELEVACIONESLATERALES_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class ElevacionesLaterales : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void ElevacionesLaterales::IngresarDatos(){
    std::cout<<"__Registro de Elevaciones Laterales__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void ElevacionesLaterales::GuardarEnArchivo(){
    std::ofstream archivoElevacionesLaterales;
    archivoElevacionesLaterales.open("C://Users//valen//Desktop//gym//Hombro//ElevacionesLaterales.txt", std::ios::out);

    if(archivoElevacionesLaterales.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoElevacionesLaterales << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoElevacionesLaterales.close();

    std::cout << "Datos guardados en ElevacionesLaterales!" << "\n\n";
}

#endif