#ifndef CURLPREDICADOR_H
#define CURLPREDICADOR_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class CurlPredicador : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void CurlPredicador::IngresarDatos(){
    std::cout<<"__Registro de Curl Predicador__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void CurlPredicador::GuardarEnArchivo(){
    std::ofstream archivoCurlPredicador;
    archivoCurlPredicador.open("C://Users//valen//Desktop//gym//Bicep//CurlPredicador.txt", std::ios::out);

    if(archivoCurlPredicador.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoCurlPredicador << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoCurlPredicador.close();

    std::cout << "Datos guardados en CurlPredicador!" << "\n\n";
}

#endif