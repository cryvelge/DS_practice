//数据结构联系 顺序表的查找和插入 
#include <stdio.h>
#define MAXSIZE 100;
typedef struct {
	int data[];
	int length;
}SqList;

int findElement(SqList L, int x)
{
	int i;
	for (i=0; i< L.length; ++i) {
		if (x <  L.data[i]) {
			return i;
		}
	}
	return i;
}

void insertElement(Sqlist &L, int x)
{
	int i, p;
	p = findElement(L, x);
	for (i= L.Length - 1; i >= p; --i) {
		L.data[i + 1] = L.data[i];
	}
	L.data[p] = x;
	++L.length;
	return;
}
