#include <stdio.h>

int main()
{
	int x,sum,max,min,i;
	max=-1000;
	min=1000;
	sum=0;
	for (i=1;i<=10;i++)
	{
		printf("第%d评委打分为",i);
		scanf("%d",&x);
		sum+=x;
		if(max<x)
		max=x;
		if(min>x)
		min=x;
	}
	sum=sum-max-min;
	sum/=8;
	printf("最高分=%d\n 最低分=%d\n 选手最终得分为:%d\n",max,min,sum);
}
