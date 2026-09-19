#include <stddef.h>

typedef struct ListNode
{
	void          *data;
	struct ListNode *next;
} ListNode;

int	list_node_count(ListNode *head)
{
	int c = 0;
	while (head)
	{
		c++;
		head = head->next;
	}
	return (c);
}
