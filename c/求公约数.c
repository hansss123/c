#include <stdio.h>

int main()
{
	int i,x,j;
	printf ("请输入您想要求的数：");
	scanf ("%d",&x);
	 for(i=999;i>=100;i--)
	 {
	 	if(x%i == 0)
	 	
		 printf("%d的公约数有%d\n",x,i);

	 }
	return 0;
	 
}
