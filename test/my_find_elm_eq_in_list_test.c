#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "test.h"
#include "my.h"

void test_list_is_null() {
	t_list *list = NULL;

	assert_ptr_equal(my_find_elm_eq_in_list(list, NULL, NULL), NULL);
}

void test_no_elem_not_found_in_list()
{
	t_list *list = NULL;
	add_node("rtyj", &list);

	assert_ptr_equal(my_find_elm_eq_in_list(list, "", strcmp), NULL);
}

void test_elem_found_in_first_node()
{
	t_list *list = NULL;
	add_node("lapin", &list);

	assert_ptr_equal(my_find_elm_eq_in_list(list, "lapin", strcmp), list->data);
}

void test_elem_found_in_last_node()
{
	t_list *list = NULL;

	add_node("chat", &list);
	add_node("souris", &list);
	add_node("lapin", &list);

	assert_ptr_equal(my_find_elm_eq_in_list(list, "chat", strcmp), list->next->next->data);
}

int main()
{
	printf("test_list_is_null\n");
	test_list_is_null();
	printf("\n");

	printf("test_no_elem_not_found_in_list\n");
	test_no_elem_not_found_in_list();
	printf("\n");

	printf("test_elem_found_in_first_node\n");
	test_elem_found_in_first_node();
	printf("\n");

	printf("test_elem_found_in_last_node\n");
	test_elem_found_in_last_node();
	printf("\n");
}



