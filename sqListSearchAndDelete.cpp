int searchDelete(LNode *c, int x){
	LNode *p,*q;
	p = c;
	
	//查找部分 
	while (p->next){
		if(p->next->data == x){
			break;
		}
		p=p->next;
	}
	
	//没找到时 
	if(!p->next){
		return 0;
	}
	//删除部分
	else{
		q = p->next;
		p->next = p->next->next;
		free(q);
		return 1; 
	} 
}
