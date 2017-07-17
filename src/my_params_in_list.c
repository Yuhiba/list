#include <stdio.h>
#include <stdlib.h>

#include "list.h"

t_list *my_params_in_list(int ac, char **av)
{
	t_list *node;
	t_list *params;
	int i;

	i = 0;
	params = NULL;
	while (i < ac)
	{
		if((node = malloc(sizeof(*node))))
		{
			node->data = av[i];
			node->next = params;
			params = node;
		}
		i += 1;
	}
	return node;
}
