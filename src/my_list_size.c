#include <stdlib.h>

#include "list.h"

int my_list_size(t_list *begin)
{
	int size;

	size = 0;
	while (begin != NULL)
	{
		size += 1;
		begin = begin->next;
	}
	return size;
}
