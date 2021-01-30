#include<stdio.h>
int main()
{
	int a;
	int n=0;
	scanf("%d",&a);
	n++;
	a/=10; 
	if(a<0)
	{a=-a;
	
	} 
	
	while(a>0)
	{
		n++;
		a=a/10;
	
	}
	printf("Î»Êý%d",n);
	return 0;
	 
}
