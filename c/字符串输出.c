# include <stdio.h>
# include <string.h>    //strlen �ĺ����� 
int main ()
{
     char a [10];
	 int b,i,j;
     printf ("������һ����������\n");
     scanf ("%s",a);
     b =strlen (a);
     printf ("һ��%dλ��Ч����\n",b);
    for(i=0;i<10;i++)
    printf("%c\n",a[i]);
	for(j=10;j>=0;j--)
	printf("%c",a[j]);
	return 0;
}
