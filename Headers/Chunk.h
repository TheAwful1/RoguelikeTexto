#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <conio.h>
#include <Entidades.h>
#include <Objetos.h>


typedef struct 
{
    char* Direccion;
    int** Posicion;
    char* Bioma;
    Entidades* entidades;
    Objetos* objetos;

} Chunk;


char* GenerarDireccion(){}
char* GenerarBioma(){}
int** GenerarPosicion(){} //Esto Devuelve una matiz, realmente no se me ocurre que hacer con esto
Entidades* GenerarEntidades(){} //Esto Deberia devolver un array de structs
Objetos* GenerarObjetos(){}//Esto Deberia devolver un array de structs

//En el futuro podria generar un mapa mas grande y complejo usando muchos chunks
Chunk GenerarChunk(){
    Chunk chunk;
    chunk.Direccion = GenerarDireccion();
    chunk.Bioma = GenerarBioma();
    chunk.Posicion = GenerarPosicion();
    chunk.entidades = GenerarEntidades();
    chunk.objetos = GenerarObjetos();
return chunk;
}
