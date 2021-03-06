#include <stdlib.h>
#include <stdio.h>

#include "my.h"

//fonction qui retourne la data du premier noeud qui est égal à data_ref.

void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
	while (begin != NULL)
	{
		if(cmp(data_ref, begin->data) == 0)
			return begin->data;
		begin = begin->next;
	}
	return NULL;
}
