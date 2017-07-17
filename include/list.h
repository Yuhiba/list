#ifndef __LIST_H__
#define __LIST_H__

typedef struct s_list
{
	char *data;
	struct s_list *next;
} t_list;

#endif