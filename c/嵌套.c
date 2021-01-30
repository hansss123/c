#include<stdio.h>
int main()
{
	int n,m,x;
	scanf("%d %d %d",&n,&m,&x);
	printf("%d\n",m+n+x);
	if (n>m && n>x){
		printf("n最大"); 
	}
	else if (m>x){
		printf("m最大"); 
	}
	else 
	printf("x最大"); 

	return 0;
	}	
