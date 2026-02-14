#include <iostream>
#include "Celular.h"

// Constructor
Celular::Celular(std::string marca, std::string modelo, int almacenamiento, int bateria, double precio) {
    this->marca = marca;
    this->modelo = modelo;
    this->almacenamiento = almacenamiento;
    this->bateria = bateria;
    this->precio = precio;
}
void Celular::mostrarInfo() {
    std::cout << "Marca: " << marca << std::endl;
    std::cout << "Modelo: " << modelo << std::endl;
    std::cout << "Almacenamiento: " << almacenamiento << " GB" << std::endl;
    std::cout << "Bateria: " << bateria << "%" << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
}

void Celular::cargarBateria(int cantidad) {
    bateria += cantidad;
    if (bateria > 100) {
        bateria = 100;
    }
}

void Celular::hacerLlamada() {
    if (bateria > 0) {
        bateria -= 5;
        std::cout << "Llamando..." << std::endl;
    } else {
        std::cout << "Sin bateria!" << std::endl;
    }
}