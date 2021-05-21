#include "includes/one.h"

t_animal	*generate_new_animal()
{
	t_animal *new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	new->x = rand() % 10;
	new->y = rand() % 10;
	new->next = NULL;
	return (new);
}
t_animal	*generate_new_population(int number_of_animals)
{
	t_animal *new;
	t_animal *begin;

	begin = generate_new_animal();
	new = begin;
	while (number_of_animals > 1)
	{
		new->next = generate_new_animal();
		new = new->next;
		number_of_animals--;
	}
	return (begin);
}

void		move_all_animals(t_animal *lst)
{
	while (lst)
	{
		lst->x += (rand() % 3) - 1;
		lst->y += (rand() % 3) - 1;
		lst->x = lst->x < 0 ? 0: lst->x;
		lst->y = lst->y < 0 ? 0 : lst->y;
		lst->x = lst->x > 9 ? 9 : lst->x;
		lst->y = lst->y > 9 ? 9 : lst->y;
	lst = lst->next;
	}
}

void	print_lst_animal(t_animal *to_print)
{
	while(to_print)
	{
		printf("\nx = %d\ny = %d\n\n", to_print->x, to_print->y);
		to_print = to_print->next;
	}
}

