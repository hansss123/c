# include <stdio.h>
int main()
{
	int a,b;
	int i,j;
	a=1;
	scanf ("%d",&b);
	printf ("  1\n");
	for (i=2;i<=b;a=1,i++)
   {printf (" 1 ");
    for(j=1;j<=i-2;j++)
    printf("%2d ",(a=(i-j)*a/j));
   	printf(" 1\n");
	   }
	   getchar();
	   return 0;	
}
