#include "includes/header.h"


int init_central_store(center *global)
{
  global = malloc(sizeof(center));
  if (global)
  {
    init_animal_tab();
    global->time = 0;
    return (1);
  }
  else
    return (0);

}

int main()
{
  char map[11][11];
  int i = 0;
  //int x, y;
  time_t random;

  init_central_store(global);
  fill_map(map);
  srand((unsigned)time(&random));
  generate_new_population(3);
 
  add_animal_pos_to_map(map);
  while (i < 500)
{
	move_all_animals();
  	fill_map(map);	
  	add_animal_pos_to_map(map);
  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	print_map(map);
	putchar('\n');
	sleep(1);
	i++;
}
  return (0);
}
