# include <stdio.h>
 int main()
 {
 	
 	
 	int a,b,c,d,e,x,y,z;
 	printf("请输入待求数：");
 	scanf ("%d",&a);
 	b=a/1000;
 	x=a%1000;
 	c=x/100;
 	y=a%100;
 	d=y/10;
 	z=y%10;
 	e=z/1;
 	
 	
 	//printf ("%d %d %d %d\n",b,c,d,e);
	 if (a==b*b*b+c*c*c+d*d*d+e*e*e)
	 {printf("该数%d是水仙花数",a);}
	 else
	 {printf("该数%d不是水仙花数",a);}
	
	  
	 return 0;
 }
