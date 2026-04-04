#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>
#include <conio.h>

const char *tiposBosque[] = { "Lobo Blanco", "Buho Gigante", "Oso Negro", "Oso Blanco"};
const char *tiposBosqueB[] = {"NPC Bosque Amistoso", "Hombre Lobo"};
const char *tiposPradera[] = {"Conejo", "Oveja Gigante", "Slime Azul", "Aguila Calva"};
const char *tiposPraderaB[] = {"NPC Pradera Amistoso"};
const char *tiposJungla[] = {"Boa Constrictora Gigante", "Rana Venenosa", "Caiman", "Nutria Pantera Negra", "Pirana"};
const char *tiposJunglaB[] = {""};
const char *tiposGranja[] = { "Vaca", "Gallina","Oveja", "Gallina Pavo Real"};
const char *tiposGranjaB[] = {"Granjero","NPC Granjero amistoso"};
const char *tiposLagDorada[] = { "Dragon Blanco", "Slime Dorado"};
const char *tiposLagDoradaB[] = {"Mujer Seductora"};
const char *tiposBCarmesi[] = {"Pulpo Infernal Carmesi", "Zombie Mutante Carmesi", "Slime Carmesi", "Arana Corrupta Carmesi", "Cangrejo Gigante Azul"};
const char *tiposBCarmesiB[] = {};
const char *tipoObjeto[] = {"Arma", "Armadura", "Herramienta"};


typedef struct Entidades
{
    int Salud;//Estos atributos se generan al azar en NPC
    int Rango;//Estos atributos se generan al azar en NPC
    int Clase;//Estos atributos se generan al azar en NPC
    int EscenciaAlma;
    int FragmentosAlma;
    int CapacidadActual;
    int CapacidadPosible;
    Tipo Tipo;
};

typedef struct Creatura //Como se le añadira comportamiento?
{
    
    int Fuerza;
    int Velocidad;
    int Resistencia;
    Tipo TipoCreatura;
    bool Vivo;
};

typedef struct Jugador
{   
    int Fuerza;
    int Velocidad;
    int Resistencia;
    Entidades P1;
    bool Vivo;
    Inventario inventario;
};

typedef struct Inventario
{
    const Objeto* Inventario; //Array de Objetos
};

typedef struct Objeto
{
    Entidades atributos;
    bool Roto;
    bool TipoObjeto; 
};
typedef struct NPC
{
    Tipo TipoNPC;
};

typedef struct Tipo
{
   bool Objeto;
   bool Creatura;
   bool NPC;
};

typedef struct TipoObjeto
{
};


int** GenerarPosicion(){//Esto Devuelve una matiz, realmente no se me ocurre que hacer con esto quiza en el futuro lo use para hacer un grid, quiza deba ponerlo a las entidades

} 

Creatura GenerarCreatura(){

}

const Creatura* GenerarCreaturas(){//Esto Deberia devolver un array de structs de creaturas
 int MaximaCantidadCreatura = 6;
 int min = 1;
 int random = rand() % MaximaCantidadCreatura;
 Creatura creaturas[random]; //En la declaracion el numero de entidades predefinidas es random
 for (int i = 0; i < sizeof(creaturas)/ sizeof(creaturas[0]); i++)
 {
    creaturas[i] = GenerarCreatura();
 }
 return creaturas;

} 

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




Entidades SubirRango(Entidades entidad){

}
Entidades SubirClase(Entidades entidad){

}
