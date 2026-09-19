#include "list.h"
#include <stdlib.h>

void	list_filter(ListNode **begin, void *ref, int (*cmp)(void *, void *))
{
	if (!*begin)
		return;
	ListNode *prev = NULL;
	ListNode *curn = *begin;
	ListNode *next;
	while (curn)
	{
		next = curn->next;
		if (cmp(ref, curn->data) == 0)
		{
			if (prev)
				prev->next = next;
			else
				*begin = next;
			free(curn);
		}
		else
			prev = curn;
		curn = next;
	}
}
