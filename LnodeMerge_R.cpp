void merge(LNode *&c, LNode a, LNode b)
{
	LNode *p = a->next;
	LNode *q = b->next;
	LNode *s;
	
	c = a;
	c->next = NULL;
	free(b);
	
	while(p&q){
		if(p->data <= q->data){
			s = p;
			s->next = c->next;
			c->next = s;
			p = p->next;
		}
		else {
			s= q;
			s->next = c->next;
			c->next = s;
			q = q->next;
		}
	}
	
	while(p){
		s = p;
		s->next = c->next;
		c->next = s;
		p = p->next;
	}
	while(q){
		s = q;
		s->next = c->next;
		c->nest = s;
		q = q->next;
	}
	return;
}
