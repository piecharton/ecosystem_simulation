#include "includes/one.h"

void fill_map(char map[11][11])
{
    int i = 0;

    while (i < 10)
      {
	memset(map[i], '.', 10);
	map[i][10] = 0;
	i++;
      }
}

void print_map(char map[11][11])
{
  int i = 0;

  while (i < 10)
     {
      puts(map[i]);
      i++;
    }
}


void add_animal_pos_to_map(char map[11][11], t_animal *lst_animal)
{
	while (lst_animal)
	{
		map[lst_animal->x][lst_animal->y] = 'X';
		lst_animal = lst_animal->next;
	}
}

