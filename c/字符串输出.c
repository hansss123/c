# include <stdio.h>
# include <string.h>    //strlen 的函数库 
int main ()
{
     char a [10];
	 int b,i,j;
     printf ("请输入一个正整数：\n");
     scanf ("%s",a);
     b =strlen (a);
     printf ("一共%d位有效数字\n",b);
    for(i=0;i<10;i++)
    printf("%c\n",a[i]);
	for(j=10;j>=0;j--)
	printf("%c",a[j]);
	return 0;
}
