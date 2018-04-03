//尾插入法将一个数组存入双向链表 
void insertDList(DLNode *&C, int n, int a[])
{
	DLNode *p, *q;
	int i;
	L = (DLNode *)malloc(sizeof(DLNode));
	L->prior = NULL;
	L->next = NULL;
	p = L;
	for(i= 0;i< n;i++) {
		q = (DLNode *)malloc(sizeof(DLNode));
		q->data = a[i];
		p->next = q; 
		q->prior = p;
		p=q;
	}
	p->next = NULL;
	return;
	
} 
