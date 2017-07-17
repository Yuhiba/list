#include <stdlib.h>
#include <stdio.h>

#include "test.h"
#include "list.h"

int main() {
	printf("my_list_size returns 0 if the list is empty\t");
	assert_equal(my_list_size(NULL), 0);

	return 0;
}