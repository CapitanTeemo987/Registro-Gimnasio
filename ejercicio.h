#ifndef EJERCICIO_H
#define EJERCICIO_H 

#include<string>

class Ejercicio{
    protected:
        float peso;
        std::string fecha;
        int repeticiones;

    public:
        virtual void IngresarDatos() = 0;
        virtual void GuardarEnArchivo() = 0;
        virtual ~Ejercicio() {}

};

#endif

