#include "empleado_tiempo_completo.h"
#include <iostream>

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto() : Empleado() {
    horasSemanales = 0;
    bono = 0.0;
}

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono) 
    : Empleado(nombre, id, salarioBase)
{
    this->horasSemanales = horasSemanales;
    this->bono = bono;
}

void EmpleadoTiempoCompleto::actualizarHorasSemanales(int horas) {
    horasSemanales = horas;
}

void EmpleadoTiempoCompleto::actualizarBono(float bono) {
    this->bono = bono;
}

int EmpleadoTiempoCompleto::obtenerHorasSemanales() {
    return horasSemanales;
}

float EmpleadoTiempoCompleto::obtenerBono() {
    return bono;
}

void EmpleadoTiempoCompleto::mostrarInformacion() {
    Empleado::mostrarInformacion(); // llama a la base
    std::cout << "Horas semanales: " << horasSemanales << std::endl;
    std::cout << "Bono: " << bono << std::endl;
}

float EmpleadoTiempoCompleto::calcularSalarioTotal() {
    return salarioBase + bono;
}