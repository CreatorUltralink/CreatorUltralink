#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de una estructura para representar los datos
struct BinaryData {
    char** bits; // Matriz de punteros a caracteres para los bits
    int num_values; // Número total de valores
};

// Función para liberar la memoria utilizada por la estructura
void freeBinaryData(struct BinaryData* data) {
    for (int i = 0; i < data->num_values; i++) {
        free(data->bits[i]); // Liberar memoria de cada valor
    }
    free(data->bits); // Liberar memoria de la matriz
}

int main() {
    // Declaración e inicialización de la estructura con los datos del JSON
    struct BinaryData data = {
        .num_values = 8, // Número total de valores
        .bits = (char**)malloc(sizeof(char*) * 8) // Matriz de punteros a caracteres
    };

    // Inicialización de los valores con sus bits correspondientes
    data.bits[0] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[0], "000");

    data.bits[1] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[1], "001");

    data.bits[2] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[2], "010");

    data.bits[3] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[3], "011");

    data.bits[4] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[4], "100");

    data.bits[5] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[5], "101");

    data.bits[6] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[6], "110");

    data.bits[7] = (char*)malloc(4 * sizeof(char));
    strcpy(data.bits[7], "111");

    // Acceso a los datos
    for (int i = 0; i < data.num_values; i++) {
        printf("Valor %d: %s\n", i, data.bits[i]);
    }

    // Liberar la memoria cuando hayas terminado
    freeBinaryData(&data);

    return 0;
}
