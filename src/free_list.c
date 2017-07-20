#include <stdlib.h>

#include "my.h"

void free_list(t_list *head)
{
	t_list *node;
	t_list *tmp;

	node = head;
	while (node != NULL)
	{
		tmp = node->next;
		free(node);
		node = tmp;
	}
	return NULL;
}