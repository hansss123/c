#include <stdio.h>

void swep (int*pa,int*pb)
{
	int tmp=0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a=10;
	int b=20;
	printf("a=%d  b=%d\n",a,b);
	swep(&a,&b);
	printf("a=%d  b=%d",a,b);
	return 0;
	
 } 
