#include "includes/header.h"

t_animal *animal_tab[43];

t_animal	*generate_new_animal()
{
	t_animal *new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	new->x = rand() % 10;
	new->y = rand() % 10;
	new->hunger = 0;
	new->life = 0;
	new->thirst = 0;
	return (new);
}

void	generate_new_population(int number_of_animals)
{
	int	count;
	t_animal *tok;

	count = 0;
	while (count < number_of_animals)
	{
		tok = generate_new_animal();
		if (tok)
		{
			global->tab[count] = tok;
			count++;
		}
		else
			break ;
	}
	global->tab[count] = (t_animal *)NULL;
}

/*
void		move_all_animals(void)
{
	t_animal **ptr = global->tab;
	while (ptr && *ptr)
	{
		*ptr->x += (rand() % 3) - 1;
		*ptr->y += (rand() % 3) - 1;
		*ptr->x = *ptr->x < 0 ? 0:*ptr->x;
		*ptr->y = *ptr->y < 0 ? 0 : *ptr->y;
		*ptr->x = *ptr->x > 9 ? 9 : *ptr->x;
		*ptr->y = *ptr->y > 9 ? 9 : *ptr->y;
		(*ptr)++;
	}
}
*/
void	print_lst_animal(t_animal *to_print)
{
	t_animal *ptr = to_print;

	while (ptr)
	{
		printf("\nx = %d\ny = %d\n\n", ptr->x, ptr->y);
		ptr++;
	}
}

