#ifndef CURLPOLEA_H
#define CURLPOLEA_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class CurlPolea : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void CurlPolea::IngresarDatos(){
    std::cout<<"__Registro de Curl Polea__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void CurlPolea::GuardarEnArchivo(){
    std::ofstream archivoCurlPolea;
    archivoCurlPolea.open("C://Users//valen//Desktop//gym//Bicep//CurlPolea.txt", std::ios::out);

    if(archivoCurlPolea.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoCurlPolea << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoCurlPolea.close();

    std::cout << "Datos guardados en CurlPolea!" << "\n\n";
}

#endif