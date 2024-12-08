#include "PecFly.h"
#include "PressInclinado.h"
#include "PressSentado.h"
#include "JalonPecho.h"
#include "PressMilitar.h"
#include "CurlMartillo.h"
#include "PressFrances.h"
#include "ExtensionCodoA.h"
#include "ExtensionCodo.h"
#include "CurlPredicador.h"
#include "CurlPolea.h"
#include "ElevacionesLaterales.h"
#include "PullOver.h"
#include <iostream>

int main(){
    int opcion = 0; 
    int opcionPecho = 0;
    int opcionEspalda = 0;
    int opcionTricep = 0;
    int opcionBicep = 0;
    int opcionHombro = 0;
    Ejercicio *ejercicio = nullptr;

    while (true) {
        std::cout << "Seleccione el ejercicio que desea registrar:\n";
        std::cout << "1. Pecho\n";
        std::cout << "2. Bicep\n";
        std::cout << "3. Tricep\n";
        std::cout << "4. Hombro\n";
        std::cout << "5. Espalda\n";
        std::cout << "0. Salir\n";
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "1. Press Inclinado\n";
                std::cout << "2. Press Sentado\n";
                std::cout << "3. Pec Fly\n";
                std::cin >> opcionPecho;

                switch (opcionPecho)
                {
                    case 1:
                        ejercicio = new PressInclinado();
                        break;
                    case 2:
                        ejercicio = new PressSentado();
                        break;
                    case 3:
                        ejercicio = new PecFly();
                        break;
                    default:
                        std::cout << "Opción no válida. Regresando al menú principal.\n";
                        continue;
                }
                break;
            
            case 2:
                std::cout << "1. Curl Polea\n";
                std::cout << "2. Curl Predicador\n";
                std::cout << "3. Curl Martillo\n";
                std::cin >> opcionBicep;

                switch (opcionBicep)
                {
                    case 1:
                        ejercicio = new CurlPolea();
                        break;
                    case 2:
                        ejercicio = new CurlPredicador();
                        break;
                    case 3:
                        ejercicio = new CurlMartillo();
                        break;
                    default:
                        std::cout << "Opción no válida. Regresando al menú principal.\n";
                        continue;
                }
                break;
            
            case 3:
                std::cout << "1. Press Frances\n";
                std::cout << "2. Extension Codo\n";
                std::cout << "3. Extension Codo Arriba\n";
                std::cin >> opcionTricep;

                switch (opcionTricep)
                {
                    case 1:
                        ejercicio = new PressFrances();
                        break;
                    case 2:
                        ejercicio = new ExtensionCodo();
                        break;
                    case 3:
                        ejercicio = new ExtensionCodoA();
                        break;
                    default:
                        std::cout << "Opción no válida. Regresando al menú principal.\n";
                        continue;
                }                
                break;

            case 4:
                std::cout << "1. Press Militar\n";
                std::cout << "2. Elevaciones Laterales\n";
                std::cin >> opcionHombro;

                switch (opcionHombro)
                {
                    case 1:
                        ejercicio = new PressMilitar();
                        break;
                    case 2:
                        ejercicio = new ElevacionesLaterales();
                        break;
                    default:
                        std::cout << "Opción no válida. Regresando al menú principal.\n";
                        continue;
                }  
                break;              

            case 5:
                std::cout << "1. Jalon al Pecho\n";
                std::cout << "2. Pullover\n";
                std::cin >> opcionEspalda;

                switch (opcionEspalda)
                {
                    case 1:
                        ejercicio = new JalonPecho();
                        break;
                    case 2:
                        ejercicio = new PullOver();
                        break;
                    default:
                        std::cout << "Opción no válida. Regresando al menú principal.\n";
                        continue;
                }                
                break;

            case 0:
                std::cout << "Saliendo del programa...\n";
                return 0; // Salir del programa
                
            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
                continue; // Volver al inicio del bucle
        }

        // Llamar a IngresarDatos y GuardarEnArchivo
        ejercicio->IngresarDatos();
        ejercicio->GuardarEnArchivo();

        delete ejercicio; // Liberar memoria
        ejercicio = nullptr; // Reiniciar puntero
    }

    return 0;
}