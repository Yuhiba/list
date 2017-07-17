#include <stdio.h>
#include <stdlib.h>

#include "my.h"

t_list *my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
	while (begin != NULL)
	{
		if(cmp(data_ref, begin->data) == 0)
		{
			printf("%s\n", begin->data);
			return begin;
		}
		begin = begin->next;
	}
	return 0;
}
