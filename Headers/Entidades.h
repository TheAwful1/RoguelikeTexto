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


typedef struct Entidades
{
    int Salud;//Estos atributos se generan al azar
    int Rango;//Estos atributos se generan al azar
    int Clase;//Estos atributos se generan al azar
    int EscenciaAlma;
    int FragmentosAlma;
    int CapacidadActual;
    int CapacidadPosible;
};

