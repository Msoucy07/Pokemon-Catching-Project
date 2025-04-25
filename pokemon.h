#ifndef POKEMON_H
#define POKEMON_H

typedef struct {
    char name[50];
} Pokemon;

Pokemon* create_team(int size);
void print_team(Pokemon* team, int size);
void free_team(Pokemon* team, int size);
void trim_whitespace(char* str);
Pokemon spawn_random_pokemon();
void save_team_to_file(Pokemon* team, int size, const char* filename);
int load_team_from_file(Pokemon** team, const char* filename);



#endif