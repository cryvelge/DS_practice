//������n��Ԫ���Ѿ��������У���β���뷨��������c 
void createlistR(LNode *&c, int a[], int n)
{
	LNode *s, *r;
	int i;
	c = (LNode *)malloc(sizeof(LNode));
	c->next = NULL;
	r = c;
	for (i= 0;i< n; i++){
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = NULL;
		r->next = s;
		r = c->next;
	}
	r->next = NULL;
	return;
 } 
 
 // ͷ�巨
 void creatListF(LNode *&c, int a[], int n)
{
	LNode *s;
	int i;
	c = (LNode *)malloc(sizeof(LNode));
	c->next = NULL;
	
	for(i = 0;i < n; i++) {
		s = (LNode *)malloc(sizeof(LNode));
		s->data = a[i];
		s->next = c->next;
		c->next = s;
	}
} 
