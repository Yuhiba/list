#include <stdlib.h>

#include "list.h"

int my_rev_list(t_list **begin)
{
	t_list *prev;
	t_list *next;
	t_list *tmp;

	tmp = *begin;
	prev = NULL;
	while (tmp != NULL)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*begin = prev;
	return 0;
}
