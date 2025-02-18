#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definimos la estructura para almacenar la información de los partidos
typedef struct {
    char *equipo1;
    char *equipo2;
    int goles1;
    int goles2;
    char fecha[11]; // Formato "YYYY-MM-DD"
} Partido;

// Función para determinar el resultado del partido
char determinar_resultado(Partido p) {
    if (p.goles1 > p.goles2) return '1';
    else if (p.goles1 < p.goles2) return '2';
    else return 'X';
}

int main() {
    int i;
    Partido partidos[3];
    
    // Almacenamos 3 partidos
    for (i = 0; i < 3; i++) {
        partidos[i].equipo1 = (char *)malloc(50 * sizeof(char));
        partidos[i].equipo2 = (char *)malloc(50 * sizeof(char));
        
        printf("Ingrese el nombre del equipo 1: ");
        scanf("%s", partidos[i].equipo1);
        
        printf("Ingrese el nombre del equipo 2: ");
        scanf("%s", partidos[i].equipo2);
        
        printf("Ingrese los goles de %s: ", partidos[i].equipo1);
        scanf("%d", &partidos[i].goles1);
        
        printf("Ingrese los goles de %s: ", partidos[i].equipo2);
        scanf("%d", &partidos[i].goles2);
        
        printf("Ingrese la fecha del partido (DD-MM-YYYY): ");
        scanf("%s", partidos[i].fecha);
    }

    // Mostramos la información almacenada
    printf("\nPartidos registrados:\n");
    for (i = 0; i < 3; i++) {
        printf("%s vs %s - Resultado: %d-%d - Fecha: %s - Resultado Quiniela: %c\n", 
               partidos[i].equipo1, partidos[i].equipo2, 
               partidos[i].goles1, partidos[i].goles2, 
               partidos[i].fecha, determinar_resultado(partidos[i]));
    }
    
    // Liberamos la memoria reservada dinámicamente
    for (i = 0; i < 3; i++) {
        free(partidos[i].equipo1);
        free(partidos[i].equipo2);
    }
    
    return 0;
}