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

