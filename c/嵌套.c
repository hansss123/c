#include<stdio.h>
int main()
{
	int n,m,x;
	scanf("%d %d %d",&n,&m,&x);
	printf("%d\n",m+n+x);
	if (n>m && n>x){
		printf("n���"); 
	}
	else if (m>x){
		printf("m���"); 
	}
	else 
	printf("x���"); 

	return 0;
	}	
