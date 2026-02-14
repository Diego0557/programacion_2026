#ifndef CELULAR_H
#define CELULAR_H

#include <string>

class Celular {
private:
    std::string marca;
    std::string modelo;
    int almacenamiento;
    int bateria;
    double precio;

public:
    // Constructor
    Celular(std::string marca, std::string modelo, int almacenamiento, int bateria, double precio);

    // Métodos
    void mostrarInfo();
    void cargarBateria(int cantidad);
    void hacerLlamada();
};

#endif