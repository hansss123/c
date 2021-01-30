# include <stdio.h>
int sushu(int x)
{
	int a,b;
	for(a=2;a<x;a++)
	{ 
	if (x%a == 0)
	{
       b=0; 
	   break;	 
	}
	else 
	  b=1;
	} 
  return b; 
}
int main ()
{
	int i;
	for(i=1;i<=2000;i++)
	{
		if(sushu(i) == 1)
	    printf("%d为素数\n",i);
		else 
		printf("%d不为素数\n",i); 
	}
	return 0; 
 } 
