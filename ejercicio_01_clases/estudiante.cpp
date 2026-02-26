#include "estudiante.h"
#include <iostream>

Estudiante::Estudiante() {
    this->nombre = "";
    this->codigo = "";
    this->edad = 0;
    this->promedio = 0.0;
    this->activo = false;
}

Estudiante::Estudiante(std::string nombre, std::string codigo, int edad, float promedio, bool activo) {
    this->nombre = nombre;
    this->codigo = codigo;
    this->edad = edad;
    this->promedio = promedio;
    this->activo = activo;
}

void Estudiante::actualizarNombre(std::string nuevoNombre) {
    this->nombre = nuevoNombre;
}

void Estudiante::actualizarCodigo(std::string nuevoCodigo) {
    this->codigo = nuevoCodigo;
}

void Estudiante::actualizarEdad(int nuevaEdad) {
    this->edad = nuevaEdad;
}

void Estudiante::actualizarPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0 && nuevoPromedio <= 10.0) {
        this->promedio = nuevoPromedio;
    } else {
        std::cout << "Error: El promedio debe estar entre 0.0 y 10.0" << std::endl;
    }
}

void Estudiante::actualizarActivo(bool nuevoEstado) {
    this->activo = nuevoEstado;
}

std::string Estudiante::obtenerNombre() {
    return this->nombre;
}

std::string Estudiante::obtenerCodigo() {
    return this->codigo;
}

int Estudiante::obtenerEdad() {
    return this->edad;
}

float Estudiante::obtenerPromedio() {
    return this->promedio;
}

bool Estudiante::obtenerActivo() {
    return this->activo;
}

void Estudiante::mostrarNombre() {
    std::cout << "Nombre: " << nombre << std::endl;
}

void Estudiante::mostrarCodigo() {
    std::cout << "Código: " << codigo << std::endl;
}

void Estudiante::mostrarEdad() {
    std::cout << "Edad: " << edad << " años" << std::endl;
}

void Estudiante::mostrarPromedio() {
    std::cout << "Promedio: " << promedio << std::endl;
}

void Estudiante::mostrarActivo() {
    if (activo)
        std::cout << "Estado: Activo" << std::endl;
    else
        std::cout << "Estado: Inactivo" << std::endl;
}

void Estudiante::mostrarInformacionCompleta() {
    mostrarNombre();
    mostrarCodigo();
    mostrarEdad();
    mostrarPromedio();
    mostrarActivo();
}

void Estudiante::incrementarEdad() {
    edad++;
}

void Estudiante::calcularEstadoAcademico() {
    std::cout << "Estado académico: ";

    if (promedio >= 9.0)
        std::cout << "Excelente";
    else if (promedio >= 8.0)
        std::cout << "Muy Bueno";
    else if (promedio >= 7.0)
        std::cout << "Bueno";
    else if (promedio >= 6.0)
        std::cout << "Regular";
    else
        std::cout << "Necesita Mejorar";

    std::cout << std::endl;
}