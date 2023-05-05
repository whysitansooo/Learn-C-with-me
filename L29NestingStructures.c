#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;

    typedef struct LegendryPokemon{
        pokemon normal;
        char ability[10];
    }LegendryPokemon;

    LegendryPokemon MewTwo;
    strcpy(MewTwo.ability,"Pressure");
    MewTwo.normal.attack = 50;
    MewTwo.normal.hp = 150;
    MewTwo.normal.speed = 180;
    strcpy(MewTwo.normal.name,"MewTwo");
    
    typedef struct GodPokemon{
        LegendryPokemon God;
        int SpecialAttack;
    }GodPokemon;

    GodPokemon Arceus;
    Arceus.God.normal.hp = 500;
    Arceus.SpecialAttack = 250;


}