#ifndef HEADER_H
# define HEADER_H

#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

# define MAX_ANIMAL_NB 10

typedef struct s_list
{
	void		*content;
	struct list	*next;
}	t_list;

typedef struct	s_animal
{
	int		x;
	int		y;
	int		hunger;
	int		thirst;
	int		life;
}		t_animal;


typedef struct central_store
{
  t_animal 	*tab[MAX_ANIMAL_NB];
  int       time;
  /* data */
} center;

center *global;

//static char *animal_tab[42];


void fill_map(char map[11][11]);
void print_map(char map[11][11]);

t_animal *generate_new_animal();
void	generate_new_population(int number_of_animals);
void	print_lst_animal(t_animal *to_print);
int insert_new_animal(t_animal *new);
void	add_animal_pos_to_map(char map[11][11]);
void	move_all_animals(void);


void init_animal_tab();

#endif
