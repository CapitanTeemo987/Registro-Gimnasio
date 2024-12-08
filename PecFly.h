#ifndef PECFLY_H
#define PECFLY_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class PecFly : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void PecFly::IngresarDatos(){
    std::cout<<"__Registro de Press PecFly__" << "\n\n";
    std::cout << "Ingrese el peso contando la barra (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void PecFly::GuardarEnArchivo(){
    std::ofstream archivoPecFly;
    archivoPecFly.open("C://Users//valen//Desktop//gym//Pecho//PecFly.txt", std::ios::out);

    if(archivoPecFly.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoPecFly << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoPecFly.close();

    std::cout << "Datos guardados en PecFly!" << "\n\n";
}

#endif