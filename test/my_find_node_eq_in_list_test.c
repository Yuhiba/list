#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "test.h"
#include "my.h"

void test_list_is_null() {
	t_list *list = NULL;

	assert_ptr_equal(my_find_node_eq_in_list(list, NULL, NULL), NULL);
	free(list);
}

void test_no_node_not_found_in_list()
{
	t_list *list = NULL;
	add_node("rtyj", &list);

	assert_ptr_equal(my_find_elm_eq_in_list(list, "", strcmp), NULL);
	free(list);
}

void test_found_first_node()
{
	t_list *list = NULL;
	add_node("lapin", &list);

	assert_ptr_equal(my_find_node_eq_in_list(list, "lapin", strcmp), list);
	free(list);
}

void test_found_last_node()
{
	t_list *list = NULL;

	add_node("chat", &list);
	add_node("souris", &list);
	add_node("lapin", &list);

	assert_ptr_equal(my_find_node_eq_in_list(list, "chat", strcmp), list->next->next);
	free(list);
}

int main()
{
	printf("test_list_is_null :\n - ");
	test_list_is_null();
	printf("\n");

	printf("test_no_node_not_found_in_list :\n - ");
	test_no_node_not_found_in_list();
	printf("\n");

	printf("test_found_first_node :\n - ");
	test_found_first_node();
	printf("\n");

	printf("test_found_last_node :\n - ");
	test_found_last_node();
	printf("\n");
}