#ifndef PRESSINCLINADO_H
#define PRESSINCLINADO_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PressInclinado : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PressInclinado::IngresarDatos(){
    std::cout<<"__Registro de Press Inclinado__" << "\n\n";
    std::cout << "Ingrese el peso contando la barra (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PressInclinado::GuardarEnArchivo(){
    std::ofstream archivoPressInclinado;
    archivoPressInclinado.open("C://Users//valen//Desktop//gym//Pecho//PressInclinado.txt", std::ios::out);

    if(archivoPressInclinado.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPressInclinado << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPressInclinado.close();

    std::cout << "Datos guardados en PressInclinado!" << "\n\n";
}

#endif