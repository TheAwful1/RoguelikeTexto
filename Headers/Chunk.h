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
    const Entidades* entidades;
    const Objetos* objetos;

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
int** GenerarPosicion(){//Esto Devuelve una matiz, realmente no se me ocurre que hacer con esto quiza en el futuro lo use para hacer un grid, quiza deba ponerlo a las entidades

} 
Entidades GenerarEntidad(){}

const Entidades* GenerarEntidades(){
 int MaximaCantidadEntidades = 6;
 int min = 1;
 int random = rand() % MaximaCantidadEntidades;
 Entidades entidades[random]; //En la declaracion el numero de entidades predefinidas es random
 for (int i = 0; i < sizeof(entidades)/ sizeof(entidades[0]); i++)
 {
    entidades[i] = GenerarEntidad();
 }
 return entidades;

} //Esto Deberia devolver un array de structs

Objetos GenerarObjeto(){}

const Objetos* GenerarObjetos(){
    int MaximaCantidadObjetos = 6;
    int random = rand() % MaximaCantidadObjetos;
    Objetos objetos[random];
 for (int i = 0; i < random; i++)
 {
    objetos[i] = GenerarObjeto();
 }
 return objetos;

}//Esto Deberia devolver un array de structs

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
