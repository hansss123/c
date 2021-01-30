#include <stdio.h>
#include<string.h>
int main()
{
	char a[10]="hello word";
	int b,i;
	/*putchar(a[0]);
	putchar(/c);
	putchar(a[1]);
	putchar(a[2]);
	putchar(a[3]);
	putchar(a[4]);
	putchar(a[5]);
	putchar(a[6]);
	putchar(a[7]);
	putchar(a[8]);
	putchar(a[9]);*/
	for(i=0;i<10;i++)
	printf("%c\n",a[i]);
	memset(a,'5',5);
	b=strlen (a);
	printf("%s %d",a,b);
	return 0;
 } 
