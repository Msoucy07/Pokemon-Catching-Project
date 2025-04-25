#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "pokemon.h"

#define TEAM_SIZE 6


int main(){
    srand(time(NULL)); // seed
    
    Pokemon *team = malloc(sizeof(Pokemon) * TEAM_SIZE);
    if (team == NULL) {
        fprintf(stderr, "Memory allocation failed");
        return 1;
    }

    int choice;
    int count = 0;
    while (1) {
        printf("1. Catch Pokemon\n2. Print team\n3. Save team\n4. Load team\n5. Exit\n");
    }