//���������������鲢��һ���ǵݼ������� 
void merge(LNode*&c,LNode *a, LNode *b)
{
	LNode *p = a->next;
	LNode *q = b->next;
	
	c=a;
	
	LNode *r;
	r = c;
	
	while(p&&q){
		if(p->data <= q->data){
			r->next = p;
			p = p->next;
		}
		else{
			r->next = q;
			q = q->next;
		}
		r = r->next;
	}
	if(p){
		r->next = p;
	}
	
	if(q){
		r->next = q;
	}
}
