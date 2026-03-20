#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct 
{
    int vida;
    
} Jugador;

bool vivo(Jugador j){
   return j.vida > 0;
}