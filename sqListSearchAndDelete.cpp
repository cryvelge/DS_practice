int searchDelete(LNode *c, int x){
	LNode *p,*q;
	p = c;
	
	//���Ҳ��� 
	while (p->next){
		if(p->next->data == x){
			break;
		}
		p=p->next;
	}
	
	//û�ҵ�ʱ 
	if(!p->next){
		return 0;
	}
	//ɾ������
	else{
		q = p->next;
		p->next = p->next->next;
		free(q);
		return 1; 
	} 
}
