#include <stdlib.h>
#include <stdio.h>


#include "my.h"

void *my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
	while (begin != NULL)
	{
		if(cmp(data_ref, begin->data) == 0)
		{
			printf("%s\n", begin->data);
			return;
		}
		begin = begin->next;
	}
	return;
}
