#include <stdio.h>

int main()
{
	int x,sum,max,min,i;
	max=-1000;
	min=1000;
	sum=0;
	for (i=1;i<=10;i++)
	{
		printf("��%d��ί���Ϊ",i);
		scanf("%d",&x);
		sum+=x;
		if(max<x)
		max=x;
		if(min>x)
		min=x;
	}
	sum=sum-max-min;
	sum/=8;
	printf("��߷�=%d\n ��ͷ�=%d\n ѡ�����յ÷�Ϊ:%d\n",max,min,sum);
}
