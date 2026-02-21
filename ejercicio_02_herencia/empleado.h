#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    std::string id;
    float salarioBase;

public:
    Empleado(); // constructor por defecto
    Empleado(std::string nombre, std::string id, float salarioBase);

    void actualizarNombre(std::string nombre);
    void actualizarId(std::string id);
    void actualizarSalarioBase(float salarioBase);

    std::string obtenerNombre();
    std::string obtenerId();
    float obtenerSalarioBase();

    void mostrarInformacion();
};

#endif