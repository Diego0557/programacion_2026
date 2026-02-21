#include "empleado.h"
#include <iostream>

Empleado::Empleado() {
    nombre = "";
    id = "";
    salarioBase = 0.0;
}

Empleado::Empleado(std::string nombre, std::string id, float salarioBase) {
    this->nombre = nombre;
    this->id = id;
    this->salarioBase = salarioBase;
}

void Empleado::actualizarNombre(std::string nombre) {
    this->nombre = nombre;
}

void Empleado::actualizarId(std::string id) {
    this->id = id;
}

void Empleado::actualizarSalarioBase(float salarioBase) {
    this->salarioBase = salarioBase;
}

std::string Empleado::obtenerNombre() {
    return nombre;
}

std::string Empleado::obtenerId() {
    return id;
}

float Empleado::obtenerSalarioBase() {
    return salarioBase;
}

void Empleado::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Salario base: " << salarioBase << std::endl;
}