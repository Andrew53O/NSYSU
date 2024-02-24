#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

void print_Listnode(struct ListNode* head) {
	if(head == NULL)
		printf(" ");
	while(head != NULL) {
		printf("%d ",head -> val);
		head = head -> next;
	}
	printf("\n");
}

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	// 請填空此函式
	// list isi 1, remove 1 gagal
	// list isi 2, remove 1 dari end
	
	// error ini
	// 7 remove 6
	int total = 0;
	int i,j;
	struct ListNode *temp = head;
	struct ListNode *before_temp = head;
	struct ListNode *temp_head = head;
	
	struct ListNode *empty = NULL;
	
	while(temp != NULL)
	{
		total++;
		temp = temp->next;
	}
	
	if (total == 1)
	{
		return empty;
	}
	
	temp = head;
	
	int find = total - n;
	
	for (i = 0; i < find; i++)
	{
		temp = temp->next;
	}
	if (find > 0)
	{
		for (i = 0; i < find - 1; i++) // kurang 1 sini bikin gagal kalua sama
		{
			before_temp = before_temp->next;
		}
			before_temp->next = temp->next;

		
	}
	
	if (head == temp)
	{
		head = head->next;
		temp_head = head;
	}
	else if (temp->next == NULL)
	{
		before_temp->next = NULL;
	}
	free(temp);

	

	return temp_head;
};

int main(int argc, char *argv[]) {
	struct ListNode *head = malloc(sizeof(struct ListNode));
	struct ListNode *orign_head = head;
	srand(time(NULL));
	int i;
	int num = rand()%30 + 1;
	int n = rand()%num + 1;
	for(i=1; i <= num; i++) {
		head -> val = i;
		head -> next = malloc(sizeof(struct ListNode));
		if(i == num)
			head -> next = NULL;
		else
			head = head -> next;
	}
	head = orign_head;
	printf("orign List\n");
	print_Listnode(head);
	printf("Remove %dth Node From End of List\n",n);
	head = removeNthFromEnd(head,n);
	printf("result\n");
	print_Listnode(head);
	return 0;
}

