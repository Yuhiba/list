#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "my.h"

char *my_revstr(char *str)
{
	int i;
	int j;
	char tmp;

	i = 0;
	j = strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i += 1;
		j -= 1;
	}
	return str;
}

void show_list(t_list *params)
{
	while (params != NULL)
	{
		printf("%s\n", params->data);
		params = params->next;
	}
}

int rev_str_list(void *s)
{
	my_revstr(s);
	return 0;
}

int main(int argc, char*argv[])
{
	t_list *params = my_params_in_list(argc, argv);
	char * data_ref = "lapin";

	printf("--------------show_list 2-----------------\n");
	show_list(params);
	printf("--------------apply_Lis-------------------\n");
	//my_apply_on_eq_in_list(params, rev_str_list, data_ref, strcmp);
	//show_list(params);
	printf("---------------find_elm-------------------\n");
	my_find_elm_eq_in_list(params, data_ref, strcmp);
	printf("---------------find_node------------------\n");
	printf("%p\n", my_find_node_eq_in_list(params, data_ref, strcmp));
	printf("---------------rm_all_node_eq-------------\n");
	my_rm_all_eq_from_list(&params, data_ref, strcmp);
	printf("------------------------------------------\n");
	show_list(params);

	return 0;
}
