#ifndef CURLMARTILLO_H
#define CURLMARTILLO_H

#include "ejercicio.h"
#include <iostream>
#include <fstream>

class CurlMartillo : public Ejercicio{
    public:
        void IngresarDatos();
        void GuardarEnArchivo();

};

void CurlMartillo::IngresarDatos(){
    std::cout<<"__Registro de Curl Martillo__" << "\n\n";
    std::cout << "Ingrese el peso (kg): ";
    std::cin >> peso;
    std::cout << "Ingrese la fecha (DD/MM/AAAA): ";
    std::cin >> fecha;
    std::cout << "Ingrese el número de repeticiones: ";
    std::cin >> repeticiones;
}

void CurlMartillo::GuardarEnArchivo(){
    std::ofstream archivoCurlMartillo;
    archivoCurlMartillo.open("C://Users//valen//Desktop//gym//Bicep//CurlMartillo.txt", std::ios::out);

    if(archivoCurlMartillo.fail()){
        std::cout << "El archivo no se puede abrir";
    }

    archivoCurlMartillo << "Fecha: " << fecha << ", Peso: " << peso << ", Repeticiones: " << repeticiones << "\n";
    archivoCurlMartillo.close();

    std::cout << "Datos guardados en CurlMartillo!" << "\n\n";
}

#endif