#include <stdio.h>
int pan(int x)
{
	if((x%4==0 && x%100!=0) || (x%400==0))
	return 1;
	else
	return 0; 
}
int main()
{
   int year;
	for (year=1;year<=2021;year++)
	{
		if (pan(year)==1)
		{
			printf("%dÎªÈòÄê   ",year);
		}
	}
	return 0;
	
 } 
