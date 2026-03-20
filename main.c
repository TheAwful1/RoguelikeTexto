#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


const char *lugares[] = {"Bosque", "Pradera","Jungla","Granja","Laguna Dorada", "Bosque Carmesi"};
const char *posiciones[] = {"Norte", "Este", "Sur", "Oeste"};
const char *tiposBosque[] = {"Hombre Lobo", "Lobo Blanco", "Buho Gigante", "Oso Negro", "Oso Blanco"};
const char *tiposPradera[] = {"Conejo", "Oveja Gigante", "Slime Azul", "Aguila Calva"};
const char *tiposJungla[] = {"Boa Constrictora Gigante", "Rana Venenosa", "Caiman", "Nutria Pantera Negra", "Piraña"};
const char *tiposGranja[] = {"Granjero", "Vaca", "Gallina","Oveja", "Gallina Pavo Real"};
const char *tiposLagDorada[] = {"Mujer Seductora", "Dragon Blanco", "Slime Dorado"};
const char *tiposBCarmesi[] = {"Pulpo Infernal Carmesi", "Zombie Mutante Carmesi", "Slime Carmesi", "Arraña Corrupta Carmesi", "Cangrejo Gigante Azul"};
typedef struct 
{
    char tipo;
    int vida;
    char posicion;

}Entidad;
typedef struct 
{


}Chunk;
void GuardarChunk(){}
void GuardarVariosChunk(){}

int GenerarTerreno(const char lugares[],int size){
    int random = rand() % size;
    return random;  
}
char GenerarPosicion(const char posiciones[], int size){
     int random = rand() % size;
    return posiciones[random];  
}
char GenerarTipo(int TerrenoActual){   
    
    
}
char GenerarTipos(int CantidadTipos, char TerrenoActual){

    char TipoActual = GenerarTipo(TerrenoActual);

    for (int i = 0; i < CantidadTipos; i++)
    {
        printf("Ves un: %s\n", TipoActual);
    }

}
void GenerarChunk(){
    int tamañoLugares = sizeof(lugares)/ sizeof(lugares[0]);
    int tamañoPosiciones = sizeof(posiciones)/ sizeof(posiciones[0]);
    int MaximaCantidadTipos = 6;
    char TerrenoActual = GenerarTerreno(lugares, tamañoLugares);
    char TerrenoActualNombre = lugares[TerrenoActual];

    char PosicionActual = GenerarPosicion(posiciones, tamañoPosiciones);
    int CantidadTipos = rand() % MaximaCantidadTipos;

   
    printf("Te encuentras en: %s\n", TerrenoActual);
    printf("Mirando Hacia: %s\n", PosicionActual);
    GenerarTipos(CantidadTipos, TerrenoActual);
}
void GenerarEstado(){}

int main (){
    while (true)
    {
        GenerarChunk();
    }
    
return 0;
}
