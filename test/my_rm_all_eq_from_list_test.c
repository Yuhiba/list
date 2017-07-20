#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "my.h"

//-------------------------------------------------------------------------------------------
int list_size(t_list *begin)
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

void assert_list_equal(t_list *list, t_list *ref)
{
	if(list == NULL)
	{
		printf("The list is empty : %s\n", list);
		return NULL;
	}
	while(list && ref)
	{
		if ((list_size(list)) == (list_size(ref)))
		{
			printf("SUCCESS list is equal list_ref\n");
			return list;
		}
		else
			printf("FAILURE value received: %s and expected: %s\n", list->data, ref->data);
		list = list->next;
		ref = ref->next;
	}
}

void assert_data_list_equal(t_list *list, t_list *ref, int compare_fct())
{
	if(list->data == "")
	{
		printf("List->data is empty : %s\n", list->data);
		return NULL;
	}
	while (list && ref)
	{
		if ((compare_fct(list->data, ref->data) == 0))
		{
			printf("SUCCESS\n");
			return list;
		}
		else
			printf("FAILURE the list is not equal\n");
		list = list->next;
		ref = ref->next;
	}
}
//------------------------------------------------------------------------------------------


void test_list_is_null() {
	t_list *list = NULL;

	assert_int_equal(my_rm_all_eq_from_list(&list, NULL, NULL), 0);
	free(list);
}

void test_no_node_not_found_in_list()
{
	t_list *list = NULL;
	t_list *ref = NULL;

	add_node("lapin", &list);
	add_node("chat", &list);
	add_node("chien", &list);
	//add_node("lutin", &list);

	add_node("poulpe", &ref);
	add_node("vache", &ref);
	add_node("poule", &ref);

	assert_data_list_equal(list, ref, strcmp);
	free(list);
	free(ref);
}


int main()
{
	printf("test_list_is_null :\n - ");
	test_list_is_null();
	printf("\n");

	printf("test_no_node_not_found_in_list :\n - ");
	test_no_node_not_found_in_list();
	printf("\n");
}