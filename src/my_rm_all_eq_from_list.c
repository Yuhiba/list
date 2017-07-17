#include <stdio.h>
#include <stdlib.h>

#include "my.h"

int my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
	t_list *node;

	node = *begin;
	while (node != NULL)
	{
		if (cmp(data_ref, node->data))
		{
			printf("%s\n", node->data);
			free(node);
		}
		(*begin) = node->next;
	}
	return 0;
}