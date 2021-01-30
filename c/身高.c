#include <stdio.h>
int main()

{	
   
	printf("请分别输入身高英尺和英寸："); 
	
	int a;
	
	int b;

	scanf ("%d %d", &a,  &b );
	

	printf ("身高是%f米。\n", ((a+b/12.0)*0.3048));
	return  0;
}
