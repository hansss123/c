#include <stdio.h>

int compare1(int x,int y)
{
	int tmp;
	if(x>y)
	tmp=x;
	else
	tmp=y;
	
	return tmp;
}

int compare2(int x, int y)
{
	int tmp;
	if(x<y)
	tmp=x;
	else
	tmp=y;
	
	return tmp;
}


void main() 
{
	int mark1[5];
	int mark2[5];
	int sum,avange;
	printf("请输入选手得分：\n");
	scanf("%d %d %d %d %d",&mark1[0], &mark1[1], &mark1[2], &mark1[3], &mark1[4]);
	mark2[0]=compare1(mark1[0],mark1[1]);
	mark2[1]=compare1(mark2[0],mark1[2]);
	mark2[2]=compare1(mark2[1],mark1[3]);
	mark2[3]=compare1(mark2[2],mark1[4]);
	mark2[0]=compare2(mark1[0],mark1[1]);
	mark2[1]=compare2(mark2[0],mark1[2]);
	mark2[2]=compare2(mark2[1],mark1[3]);
	mark2[4]=compare2(mark2[2],mark1[4]);
	sum=mark1[0]+mark1[1]+mark1[2]+mark1[3]+mark1[4];
	avange=(sum-mark2[4]-mark2[3]);
	avange/=3;
	printf("选手最终得分%d",avange);
	
	return 0;
}
