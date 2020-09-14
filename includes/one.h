#ifndef ONE_H
# define ONE_H

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



typedef struct	s_animal
{
	int		x;
	int		y;
	struct s_animal	*next;
}		t_animal;

void fill_map(char map[11][11]);
void print_map(char map[11][11]);

t_animal *generate_new_animal();
t_animal *generate_new_population(int number_of_animals);
void	print_lst_animal(t_animal *to_print);

void	add_animal_pos_to_map(char map[11][11], t_animal *lst_animal);

void	move_all_animals(t_animal *lst);

#endif
