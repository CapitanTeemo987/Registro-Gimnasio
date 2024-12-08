#ifndef PULLOVER_H
#define PULLOVER_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PullOver : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PullOver::IngresarDatos(){
    std::cout<<"__Registro de Extension Pull Over__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PullOver::GuardarEnArchivo(){
    std::ofstream archivoPullOver;
    archivoPullOver.open("C://Users//valen//Desktop//gym//Espalda//PullOver.txt", std::ios::out);

    if(archivoPullOver.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPullOver << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPullOver.close();

    std::cout << "Datos guardados en PullOver!" << "\n\n";
}

#endif