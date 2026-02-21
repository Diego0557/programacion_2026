#ifndef EMPLEADO_TIEMPO_COMPLETO_H
#define EMPLEADO_TIEMPO_COMPLETO_H

#include "empleado.h"

class EmpleadoTiempoCompleto : public Empleado {
private:
    int horasSemanales;
    float bono;

public:
    EmpleadoTiempoCompleto();
    EmpleadoTiempoCompleto(std::string nombre, std::string id, float salarioBase, int horasSemanales, float bono);

    void actualizarHorasSemanales(int horas);
    void actualizarBono(float bono);

    int obtenerHorasSemanales();
    float obtenerBono();

    void mostrarInformacion(); // sobrescrita

    float calcularSalarioTotal();
};

#endif