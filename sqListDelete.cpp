//删除顺序表中position处的元素 
int deleteElement(Sqlist &L, int position)
{
	if (position < 0 || position > L.length - 1)
		return 0;
	int i;
	e = L.data[position];
	for (i = position; i< L.length-1; ++i)
		L.data[i] = L.data[i + 1];
	++L.length;
	return 1;
}
