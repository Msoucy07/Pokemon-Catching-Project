#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "pokemon.h"

Pokemon* create_team(int size) {
    return (Pokemon*)malloc(sizeof(Pokemon) * size);
}

void free_team(Pokemon* team){
    free(team);
}

void print_team(Pokemon* team, int size){
    for (int i = 0; i < size; i++){
        printf("Pokemon %d", i + 1, team[i].name);
    }


}