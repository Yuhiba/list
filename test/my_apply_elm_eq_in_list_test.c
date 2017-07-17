#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "test.h"
#include "list.h"

int main(int argc, char *argv[])
{
	char *data_ref = "les";
	t_list *list_ptr = my_params_in_list(argc, argv);

	printf("Test if list is empty\n");
	assert_null(list_ptr);

	printf("\n");

	printf("Test if data is equal\n");
	assert_equal(list_ptr->data, data_ref);

	printf("\n");

	printf("Test if data_ref is NULL\n");
	assert_null(data_ref);


	//my_apply_on_eq_in_list(list_ptr, toupper(list_ptr->data), data_ref, strcmp(data_ref, list_ptr->data));
}
