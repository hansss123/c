# include <stdio.h>
# include <math.h> 
# include <stdlib.h>
#include <string.h>
int main()
{
	int x,y;
    long long int z;
	char a[50]="\0"; 
	char b[50]="\0";
	int radix = 10;
	x = 13;
	y=x;
	z=pow(x,y);
	printf("%lld\n",z);
    itoa(z,a,10);
    strcpy(b,a);
	printf("%s\n",a);
	printf("%s",b);
	
	return 0;
	
}
