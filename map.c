#include "includes/header.h"

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

void add_animal_pos_to_map(char map[11][11])
{
  t_animal *ptr = global->tab;
	while (ptr)
	{
		map[ptr->x][ptr->y] = 'X';
		ptr++;
	}
}

