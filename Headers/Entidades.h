const char *tiposBosque[] = { "Lobo Blanco", "Buho Gigante", "Oso Negro", "Oso Blanco"};
const char *tiposBosqueB[] = {"NPC Bosque Amistoso", "Hombre Lobo"};
const char *tiposPradera[] = {"Conejo", "Oveja Gigante", "Slime Azul", "Aguila Calva"};
const char *tiposPraderaB[] = {"NPC Pradera Amistoso"};
const char *tiposJungla[] = {"Boa Constrictora Gigante", "Rana Venenosa", "Caiman", "Nutria Pantera Negra", "Pirana"};
const char *tiposJunglaB[] = {""};
const char *tiposGranja[] = { "Vaca", "Gallina","Oveja", "Gallina Pavo Real"};
const char *tiposGranjaB[] = {"Granjero","NPC Grajero amistoso"};
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
};

typedef struct Creatura //Como se le añadira comportamiento?
{
    Entidades NPC;
    bool Vivo;
};

typedef struct Jugador
{
    Entidades P1;
    bool Vivo;
    Inventario inventario;
};

typedef struct Inventario
{
    const Objetos* Inventario;
};

typedef struct Objetos
{
    Entidades atributos;
    bool Roto;
    Tipo TipoObjeto;

};
typedef struct Tipo
{
    char* NombreTipo;
};




Entidades SubirRango(Entidades entidad){

}
Entidades SubirClase(Entidades entidad){

}
