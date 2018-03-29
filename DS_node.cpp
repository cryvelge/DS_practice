#include <stdio.h>
#include <stdlib.h>

int main()
{
	typedef struct Node {
		int data;
		struct Node *next;
	}Node;
	
	Node *node1, *node2;
	node1 = (Node *)malloc(sizeof(Node));
	node2 = (Node *)malloc(sizeof(Node));
	node1->data = 1;
	node1->next = node2;
	node2->data = 2;
	node2->next = NULL;
	printf("%d\n",node1->next->next);
} 
