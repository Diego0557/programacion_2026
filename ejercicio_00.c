#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Estudiante {
    char nombre[100];
    char codigo[20];
    int edad;
    float promedio;
    bool activo;
};

void mostrarInformacionCompleta(struct Estudiante e) {
    printf("\nNombre: %s\n", e.nombre);
    printf("Codigo: %s\n", e.codigo);
    printf("Edad: %d anios\n", e.edad);
    printf("Promedio: %.2f\n", e.promedio);
    
    if (e.activo)
        printf("Estado: Activo\n");
    else
        printf("Estado: Inactivo\n");
}

int main() {
    struct Estudiante e;
    int opcion;
    int estado;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Mostrar estudiante\n");
        printf("3. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:
                printf("Nombre: ");
                scanf(" %[^\n]", e.nombre);

                printf("Codigo: ");
                scanf("%s", e.codigo);

                printf("Edad: ");
                scanf("%d", &e.edad);

                printf("Promedio (0-10): ");
                scanf("%f", &e.promedio);

                if (e.promedio < 0.0 || e.promedio > 10.0) {
                    printf("Promedio invalido, se asigna 0.0\n");
                    e.promedio = 0.0;
                }

                printf("Activo? (1=Si, 0=No): ");
                scanf("%d", &estado);

                if (estado == 1)
                    e.activo = true;
                else
                    e.activo = false;

                printf("Estudiante guardado.\n");
                break;

            case 2:
                mostrarInformacionCompleta(e);
                break;

            case 3:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while(opcion != 3);

    return 0;
}