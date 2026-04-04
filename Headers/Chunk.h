#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <conio.h>
#include <Entidades.h>

const char *lugares[] = {"Bosque", "Pradera","Jungla","Granja","Laguna Dorada", "Bosque Carmesi"};
const char *posiciones[] = {"Oeste", "Norte", "Este", "Sur"};

typedef struct 
{
    const char* Direccion;
    int** Posicion;
    const char* Bioma;
    const Creatura* Creaturas;
    const Objetos* Objetos;

} Chunk;

const char* GenerarDireccion(){
    int tPosiciones = sizeof(posiciones)/ sizeof(posiciones[0]);
    int random = rand() % tPosiciones;
    const char* Direccion = posiciones[random];
    return Direccion;  
}

const char* GenerarBioma(){
    int tLugares = sizeof(lugares)/ sizeof(lugares[0]);
    int random = rand() % tLugares;
    const char* Direccion = posiciones[random];
    return Direccion;    
}
//En el futuro podria generar un mapa mas grande y complejo usando muchos chunks
Chunk GenerarChunk(){
    Chunk chunk;
    chunk.Direccion = GenerarDireccion();
    chunk.Bioma = GenerarBioma();
    chunk.Posicion = GenerarPosicion();
    chunk.Creaturas = GenerarCreaturas();
    chunk.Objetos = GenerarObjetos();
return chunk;
}
