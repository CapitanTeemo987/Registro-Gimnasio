# Sistema de Registro de Gimnasio en C++

## Descripción
Este proyecto es una aplicación desarrollada en C++ que permite registrar ejercicios físicos realizados durante un entrenamiento, como el peso levantado, las repeticiones y la fecha de la actividad. Utiliza el paradigma de Programación Orientada a Objetos (POO) con una arquitectura basada en una clase abstracta `Ejercicio` que hereda a clases específicas para cada tipo de ejercicio.

## Características
- **Registro de datos:** Peso, repeticiones y fecha para cada ejercicio.
- **Menú interactivo:** Permite seleccionar entre diferentes categorías de ejercicios.
- **Clases específicas:** Cada ejercicio tiene su propia clase derivada.
- **Almacenamiento persistente:** Los datos de cada ejercicio se guardan en archivos de texto independientes.
- **Uso dinámico de memoria:** Implementado mediante punteros para garantizar la eficiencia y evitar fugas de memoria.

## Estructura del Proyecto
El proyecto está organizado en varios archivos para facilitar su mantenimiento:

- **Archivos de cabecera (`.h`):** Declaración de las clases `Ejercicio` y sus derivados, como `PressInclinado`, `CurlPolea`, etc.
- **Archivo principal (`Main.cpp`):** Contiene el menú principal y la lógica de interacción con el usuario.
- **Archivos de datos (`.txt`):** Cada tipo de ejercicio genera su propio archivo donde se almacenan los registros.
- **Es importante modificar la ubicación de las capretas antes de darle uso al codigo. En caso contrario soltara errores**.

## Requisitos
- Compilador compatible con C++11 o superior.
- Entorno de desarrollo C++ como Visual Studio, Code::Blocks, o simplemente un compilador como `g++`.

