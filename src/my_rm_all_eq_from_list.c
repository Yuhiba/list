#include <stdio.h>
#include <stdlib.h>

#include "my.h"

// fonction qui supprime tout(s) les/les noeud(s), soit au début, soit au milieu
// et toit à la fin de ma liste simplement chaînée.

void rm_node(t_list **begin, t_list **prev, t_list **tmp)
{
	t_list *next;

	// free le/les premier(s) et/ou le/les dernier(s) noeud(s).
	if (*prev == *tmp)
	{
		next = (*tmp)->next;
		free(*tmp);
		*tmp = next;
		*begin = next;
	}
	// free le/les noeud(s) du milieu.
	else
	{
		(*prev)->next = (*tmp)->next;
		free(*tmp);
		*tmp = (*prev)->next;
	}
	// replacement des pointeurs sur les noeuds dans le cadre ou il y a plusieurs noeuds
	// à supprimer à la suite.
	*prev = *tmp;
}

//fonction qui va free les/le noeud(s) de ma liste qui est égale à data_ref.

int my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *prev;

	tmp = *begin;
	prev = *begin;
	while (tmp != NULL)
	{
		if (cmp(data_ref, tmp->data) == 0)
			rm_node(begin, &prev, &tmp);
		else
		{
			prev = tmp;
			tmp = tmp->next;
		}
	}
	return 0;
}