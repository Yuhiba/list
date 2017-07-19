#include <stdio.h>
#include <stdlib.h>

#include "my.h"
#include "test.h"

int main()
{
	t_list *list = NULL;
	t_list *list2 = NULL;

	//add_node("lapin", &list2);
	assert_int_equal(my_add_list_to_list(&list, list2), 0);


}