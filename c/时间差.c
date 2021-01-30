#include<stdio.h>
int main()
{
	int hour1, hour2,time1;
	
	int minute1, minute2,time2;
	
	scanf("%d %d",&hour1,&minute1);
	
	scanf("%d %d",&hour2,&minute2); 
	
	time1=hour1*60+minute1;
	
	time2=hour2*60+minute2;
	
	int T=time1-time2;
	
	printf("剩余时间%d时%d分。",T/60,T%60);
	
	return 0; 
	 
 } 
