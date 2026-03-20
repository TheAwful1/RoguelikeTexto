#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


const char *lugares[] = {"Bosque", "Pradera","Jungla","Granja","Laguna Dorada", "Bosque Carmesi"};
const char *posiciones[] = {"Norte", "Este", "Sur", "Oeste"};
const char *tiposBosque[] = {"Hombre Lobo", "Lobo Blanco", "Buho Gigante", "Oso Negro", "Oso Blanco"};
const char *tiposPradera[] = {"Conejo", "Oveja Gigante", "Slime Azul", "Aguila Calva"};
const char *tiposJungla[] = {"Boa Constrictora Gigante", "Rana Venenosa", "Caiman", "Nutria Pantera Negra", "Pirana"};
const char *tiposGranja[] = {"Granjero", "Vaca", "Gallina","Oveja", "Gallina Pavo Real"};
const char *tiposLagDorada[] = {"Mujer Seductora", "Dragon Blanco", "Slime Dorado"};
const char *tiposBCarmesi[] = {"Pulpo Infernal Carmesi", "Zombie Mutante Carmesi", "Slime Carmesi", "Arrana Corrupta Carmesi", "Cangrejo Gigante Azul"};
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

int GenerarTerreno(int size){
    int random = rand() % size;
    return random;  
}
int GenerarPosicion( int size){
     int random = rand() % size;
    return random;  
}
const char* GenerarTipo(int TerrenoActual){   
    if (TerrenoActual == 0)
    {
        int tamanotipo = sizeof(tiposBosque)/ sizeof(tiposBosque[0]);
        int random = rand() % tamanotipo;
        return tiposBosque[random];  
    }
    else if (TerrenoActual == 1)
    {
        int tamaotipo = sizeof(tiposPradera)/ sizeof(tiposPradera[0]);
        int random = rand() % tamaotipo;
        return tiposPradera[random];  
    }
    else if (TerrenoActual == 2)
    {
        int tamaotipo = sizeof(tiposJungla)/ sizeof(tiposJungla[0]);
        int random = rand() % tamaotipo;
        return tiposJungla[random];  
    }
    else if (TerrenoActual == 3)
    {
        int tamaotipo = sizeof(tiposGranja)/ sizeof(tiposGranja[0]);
        int random = rand() % tamaotipo;
        return tiposGranja[random];  
    }
    else if (TerrenoActual == 4)
    {
        int tamaotipo = sizeof(tiposLagDorada)/ sizeof(tiposLagDorada[0]);
        int random = rand() % tamaotipo;
        return tiposLagDorada[random];  
    }
    else if (TerrenoActual == 5)
    {
        int tamaotipo = sizeof(tiposBCarmesi)/ sizeof(tiposBCarmesi[0]);
        int random = rand() % tamaotipo;
        return tiposBCarmesi[random];  
    }
    else {
        return "El Terreno Actual no existe";
    }    
}
void GenerarTipos(int CantidadTipos, char TerrenoActual){

    
    for (int i = 0; i < CantidadTipos; i++)
    {
        const char* TipoActual = GenerarTipo(TerrenoActual);


        printf("Ves un: %s\n", TipoActual);
    }

}
void GenerarChunk(){
    int tamanoLugares = sizeof(lugares)/ sizeof(lugares[0]);
    int tamanoPosiciones = sizeof(posiciones)/ sizeof(posiciones[0]);
    int MaximaCantidadTipos = 6;
    int TerrenoActual = GenerarTerreno(tamanoLugares);
    const char* TerrenoActualNombre = lugares[TerrenoActual];

    int PosicionActual = GenerarPosicion(tamanoPosiciones);
    const char* PosicionActualNombre = posiciones[PosicionActual];
    int CantidadTipos = rand() % MaximaCantidadTipos;

   
    printf("Te encuentras en: %s\n", TerrenoActualNombre);
    printf("Mirando Hacia: %s\n", PosicionActualNombre);
    GenerarTipos(CantidadTipos, TerrenoActual);
}

int main (){
    while (true)
    {
        srand(time(NULL));
        GenerarChunk();
        getchar();
    }
    
return 0;
}
