#include "includes/header.h"

void init_animal_tab()
{
    int count = 0;
    while (count < MAX_NB_ANIMAL)
    {
        global->tab[count] = NULL;
        count++;
    }
}

int insert_new_animalt_animal *new)
{
    int i;
    for (i= 0; (i < 42) && animal_tab[i]; i++)
        ;
    if (i == 41)
    {
        printf("MAX NB OF ANIMAL REACHED\n");
        return (-1);
    }
    else
    {
        animal[i] = new;
        return (0);
    }
}