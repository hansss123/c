#include <stdio.h>
#include <string.h>

int main()
{
	char a[]="bit"; 
	char b[20]="############";
	strcpy(b,a);
	printf("%s",b);	
	return 0; 
}
