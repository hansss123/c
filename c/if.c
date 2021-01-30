#include<stdio.h>
int main()
{
	int hour1,hour2;
	int mindute1,mindute2;
	int T1,T2;
	scanf("%d %d",&hour1,&hour2);
	scanf ("%d %d",&mindute1,&mindute2);
	T1=hour1-hour2;
	T2=mindute1-mindute2; 
	printf("%d %d\n",T1,T2); 
	if (T2<0) 
   	{
	    T1--;
   	   	T2=mindute1+60-mindute2;
   	   	printf("%d %d",T1 ,T2);
			   
	}
	return 0; 
	 } 
