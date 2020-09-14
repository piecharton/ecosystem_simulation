#include "includes/one.h"

int main()
{
  char map[11][11];
  int i = 0;
  int x, y;
  time_t random;
  t_animal *lst_animal;


  fill_map(map);
  srand((unsigned)time(&random));
  lst_animal = generate_new_population(3);
 
  add_animal_pos_to_map(map, lst_animal);
  while (i < 500)
{
	move_all_animals(lst_animal);
  	fill_map(map);	
  	add_animal_pos_to_map(map, lst_animal);
  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	print_map(map);
	putchar('\n');
	sleep(1);
	i++;
}
  return (0);
}
