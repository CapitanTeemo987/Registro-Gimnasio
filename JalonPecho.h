#ifndef JALONPECHO_H
#define JALONPECHO_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class JalonPecho : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void JalonPecho::IngresarDatos(){
    std::cout<<"__Registro de Extension Jalon Pecho__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void JalonPecho::GuardarEnArchivo(){
    std::ofstream archivoJalonPecho;
    archivoJalonPecho.open("C://Users//valen//Desktop//gym//Espalda//JalonPecho.txt", std::ios::out);

    if(archivoJalonPecho.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoJalonPecho << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoJalonPecho.close();

    std::cout << "Datos guardados en JalonPecho!" << "\n\n";
}

#endif