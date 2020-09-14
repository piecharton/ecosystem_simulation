#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

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

int main()
{
  char map[11][11];
  int i = 0;
  int x, y;
  time_t random;

  fill_map(map);

  srand((unsigned)time(&random));
  x = rand() % 10;
  y = rand() % 10;
  map[x][y] = 'X';

  printf("Coordonnées du point : %d et %d\n", x, y);
  print_map(map);
  return (0);
}
