#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>

//Los arrays con B representan a los NPC amistosos o con los que se puede hablar
const char *lugares[] = {"Bosque", "Pradera","Jungla","Granja","Laguna Dorada", "Bosque Carmesi"};
const char *posiciones[] = {"Oeste", "Norte", "Este", "Sur"};
const char *tiposBosque[] = { "Lobo Blanco", "Buho Gigante", "Oso Negro", "Oso Blanco"};
const char *tiposBosqueB[] = {"NPC Bosque Amistoso", "Hombre Lobo"};
const char *tiposPradera[] = {"Conejo", "Oveja Gigante", "Slime Azul", "Aguila Calva"};
const char *tiposPraderaB[] = {"NPC Pradera Amistoso"};
const char *tiposJungla[] = {"Boa Constrictora Gigante", "Rana Venenosa", "Caiman", "Nutria Pantera Negra", "Pirana"};
const char *tiposJunglaB[] = {""};
const char *tiposGranja[] = {"Granjero", "Vaca", "Gallina","Oveja", "Gallina Pavo Real"};
const char *tiposGranjaB[] = {};
const char *tiposLagDorada[] = {"Mujer Seductora", "Dragon Blanco", "Slime Dorado"};
const char *tiposLagDoradaB[] = {};
const char *tiposBCarmesi[] = {"Pulpo Infernal Carmesi", "Zombie Mutante Carmesi", "Slime Carmesi", "Arana Corrupta Carmesi", "Cangrejo Gigante Azul"};
const char *tiposBCarmesiB[] = {};
typedef struct 
{
    const char* tipo;
    int vida;
    const char* posicion;

}Entidad;
typedef struct 
{
    int terreno;
    int posicion;
    int cantidadEntidades;
    const char* entidades[6];
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
const char* GenerarTipo(int TerrenoActual){//Se puede reemplazar con un bucle
    int AorB = rand() % 2;
    if (TerrenoActual == 0)
    {
        if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposBosque)/ sizeof(tiposBosque[0]);
            int random = rand() % tamanotipo;
            return tiposBosque[random];  
        }
        else{
            int tamanotipo = sizeof(tiposBosque)/ sizeof(tiposBosque[0]);
            int random = rand() % tamanotipo;
            return tiposBosqueB[random];  
        }      
       
    }
    else if (TerrenoActual == 1)
    { if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposPradera)/ sizeof(tiposPradera[0]);
            int random = rand() % tamanotipo;
            return tiposPradera[random];  
        }
        else{
            int tamanotipo = sizeof(tiposPraderaB)/ sizeof(tiposPraderaB[0]);
            int random = rand() % tamanotipo;
            return tiposPraderaB[random];  
        }
    }
    else if (TerrenoActual == 2)
    { 
        if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposJungla)/ sizeof(tiposJungla[0]);
            int random = rand() % tamanotipo;
            return tiposJungla[random];  
        }
        else{
            int tamanotipo = sizeof(tiposJunglaB)/ sizeof(tiposJunglaB[0]);
            int random = rand() % tamanotipo;
            return tiposJunglaB[random];  
        } 
    }
    else if (TerrenoActual == 3)
    { if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposGranja)/ sizeof(tiposGranja[0]);
            int random = rand() % tamanotipo;
            return tiposGranja[random];  
        }
        else{
            int tamanotipo = sizeof(tiposGranjaB)/ sizeof(tiposGranjaB[0]);
            int random = rand() % tamanotipo;
            return tiposGranjaB[random];  
        }
    }
    else if (TerrenoActual == 4)
    { if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposLagDorada)/ sizeof(tiposLagDorada[0]);
            int random = rand() % tamanotipo;
            return tiposLagDorada[random];  
        }
        else{
            int tamanotipo = sizeof(tiposLagDoradaB)/ sizeof(tiposLagDoradaB[0]);
            int random = rand() % tamanotipo;
            return tiposLagDoradaB[random];  
        }
    }
    else if (TerrenoActual == 5)
    { if (AorB = 1)
        {
            int tamanotipo = sizeof(tiposBCarmesi)/ sizeof(tiposBCarmesi[0]);
            int random = rand() % tamanotipo;
            return tiposBCarmesi[random];  
        }
        else{
            int tamanotipo = sizeof(tiposBCarmesiB)/ sizeof(tiposBCarmesiB[0]);
            int random = rand() % tamanotipo;
            return tiposBCarmesiB[random];  
        }
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
int GenerarChunk(){
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
    return PosicionActual;
}
void GenerarChunkB(int posicion){
    int tamanoLugares = sizeof(lugares)/ sizeof(lugares[0]);
    int MaximaCantidadTipos = 6;
    int TerrenoActual = GenerarTerreno(tamanoLugares);
    const char* TerrenoActualNombre = lugares[TerrenoActual];

    const char* PosicionActualNombre = posiciones[posicion];
    int CantidadTipos = rand() % MaximaCantidadTipos;

   
    printf("Te encuentras en: %s\n", TerrenoActualNombre);
    printf("Mirando Hacia: %s\n", PosicionActualNombre);
    GenerarTipos(CantidadTipos, TerrenoActual);
}
void GenerarMenu(int posicion){

    printf("1-> Caminar hacia : %s\n", posiciones[posicion]);

    printf("2-> Voltear hacia la izquierda\n");
    printf("3-> Voltear hacia la derecha\n");
}

int main (){
    srand(time(NULL));
    int posicion = GenerarChunk();
    
    while (true)
    {
        
        GenerarMenu(posicion);
        
        int izquierda = (posicion + 3) % 4;
        int derecha = (posicion + 1) % 4;
        char input;
        scanf("%c", &input);   
        switch (input)
        {
        case '1':
        
        GenerarChunkB(posicion);        
        getchar();
        
            break;
        case '2':
        posicion = izquierda;     
        
        GenerarChunkB(posicion);        
        getchar();
        
            break;
        case '3':
        posicion = derecha;
        
        GenerarChunkB(posicion); 
        getchar();
        
            break;
        default:        
            break;
        }
    }
    
return 0;
}