typedef struct ListNode
{
	void          *data;
	struct ListNode *next;
} ListNode;

int	list_node_count(ListNode *head)
{
	int	count;

	count = 0;
	while (head)
	{
		count++;
		head = head->next;
	}
	return (count);
}