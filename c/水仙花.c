# include <stdio.h>
 int main()
 {
 	
 	
 	int a,b,c,d,e,x,y,z;
 	printf("�������������");
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
	 {printf("����%d��ˮ�ɻ���",a);}
	 else
	 {printf("����%d����ˮ�ɻ���",a);}
	
	  
	 return 0;
 }
