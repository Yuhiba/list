#include <stdio.h>
#include <stdlib.h>

#include "my.h"

//fonction qui retourne le premier noeud qui est égal à 'data_ref'.

t_list *my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
	while (begin != NULL)
	{
		if(cmp(data_ref, begin->data) == 0)
			return begin;
		begin = begin->next;
	}
	return NULL;
}
