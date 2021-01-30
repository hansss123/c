#include <stdio.h>
int rz(int a)
{
 	int sum;
 	switch(a)
 	{
 	 case 1:
		sum=0;
		break;
	 case 2:
		sum=31;
		break;
	 case 3:
		sum=59;
		break;
	 case 4:
		sum=90;
		break;
	 case 5:
		sum=120;
		break;
	 case 6:
		sum=151;
		break;
	 case 7:
		sum=181;
		break;
	 case 8:
		sum=212;
		break;
	 case 9:
		sum=243;
		break;
	 case 10:
		sum=273;
		break;
	 case 11:
		sum=304;
		break;
	 case 12:
		sum=334;
		break;
	 default :
	 printf ("输入月份错误") ;
	 }
	return sum ;
 }
  int nian(int a)
{
	int y;  
 if (a%400==0 || (a%4==0 && a%100!=0))
      y=1;
 else
	  y=0;
 
 return  y;
}
int tian(int a , int b)
 {
 	int c,y;
 	y=nian(b);
 	if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
 	{
 		c=31;}
 		else if(a==2 && y==1)
 		{
 			c=29;
		}
		else if(a==2 && y==0)
		{
		    c=28;
		}
		else 
		{c=30;}
	
	 return c;
 } 

int main()
{
	while (1)
{
 int sum,year,month,day,i,y;
 printf("请输入");
 scanf("%d %d %d",&year,&month,&day);
 sum=rz(month);
 y=nian(year);
 i=tian(month , year);
    sum=rz(month);  
    /*printf ("%d\n %d\n",y,i);*/
	 sum+=day;
if (day>i)
{	
    printf("输入日期有误");
}	else 
	printf("%d\n",sum); 
}
 return 0;
}
