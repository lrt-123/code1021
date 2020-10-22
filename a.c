#include "stdio.h"
int main ()
{
	int m,n;
	printf("请输入两个整数：\n");
	scanf("%d%d", &m,&n);
	if(m>n)
	{
		printf("%d 大于 %d\n",m,n);
	}
	else
		printf("%d 小于 %d\n",m,n);
	return 0;
}
