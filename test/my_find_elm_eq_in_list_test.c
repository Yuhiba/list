#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "test.h"
#include "my.h"

void assert_not_equal_char(char *received, char* expected)
{
	if (received != expected) {
		printf("SUCCESS\n");
	}
	else {
		printf("FAILURE value received: %s and expected: %s\n", received, expected);
	}
}

int main()
{
	t_list *list = NULL;
	t_list *ref = NULL;
	add_node("Lapin", &list);
	//add_node("pouet", &list);
	//assert_list_equal(list, ref, assert_equal);
	int (*cmp)(int, int) = strcmp;

	// si la list à tester est null.
	printf("Is my list NULL in my_find_elm_eq_in_list\n");
	my_find_elm_eq_in_list(list, "Lapin", cmp);
	printf("cmp :%p\n", cmp);
	//assert_list_equal(list, ref, as);
	// si data est vide

	// si aucune donnée égale

	// si donnée égale trouvée.

}