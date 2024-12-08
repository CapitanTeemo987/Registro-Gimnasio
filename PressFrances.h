#ifndef PRESSFRANCES_H
#define PRESSFRANCES_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PressFrances : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PressFrances::IngresarDatos(){
    std::cout<<"__Registro de Extension Press Frances__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PressFrances::GuardarEnArchivo(){
    std::ofstream archivoPressFrances;
    archivoPressFrances.open("C://Users//valen//Desktop//gym//Tricep//PressFrances.txt", std::ios::out);

    if(archivoPressFrances.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPressFrances << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPressFrances.close();

    std::cout << "Datos guardados en PressFrances!" << "\n\n";
}

#endif