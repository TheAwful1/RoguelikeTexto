#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


const char *lugares[] = {"Bosque", "Pradera","Jungla","Granja","Laguna Dorada", "Bosque Carmesi"};
const char *posiciones[] = {"Norte", "Este", "Sur", "Oeste"};
const char *tipos[] = {"Hombre Lobo", "Pulpo Infernal","Mujer Seductora","Granjero"};
typedef struct 
{
    char tipo;
    int vida;
    char posicion;

}Entidad;
typedef struct 
{


}Chunk;


int GenerarTerreno(const char lugares[],int size){
    int random = rand() % size;
    return random;  
}
char GenerarPosicion(const char posiciones[], int size){
     int random = rand() % size;
    return posiciones[random];  
}
char GenerarTipo(int TerrenoActual){
    int tamañoTipos= sizeof(tipos)/ sizeof(tipos[0]);    
    bool tipoCorrecto = true;
    while (tipoCorrecto)
    {
        char random = rand() % tamañoTipos;
        if(3<TerrenoActual>5 && 3<random>5)
        {   
            return tipos[random];
        }
        else
        {
            break;
        }   
    }
    
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
