#include <stdio.h>
#include <stdlib.h>


struct listnode
{
	int num;
	struct listnode *ptr;
};

struct listnode node1, node2, node3;




int main(void)
{
	node1.num = 58;
	node1.ptr = &node2;
	node2.num = 72;
	node2.ptr = &node3;
	node3.num = 95;
	node3.ptr = NULL;
	
	
	printf("using node 1 get num of node 3 %d\n", node1.ptr->ptr->num);



	return 0;
}



