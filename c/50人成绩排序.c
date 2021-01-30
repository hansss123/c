# include <stdio.h> 
     int main ()
    {
	 int x,i,j;
	 int a[50][50];
	  j=1;
	  printf ("输入个人的学号和成绩\n");
	  scanf ("%d",&i) ;
	  scanf("%d",&a[i][j]);
      while(x<=50)
		{
		 if (a[i][j]>=80)
		 {
		  printf ("学号为%d\n 成绩为%d\n", i,a[i][j]);
		  printf("请输入下一位\n");
          scanf ("%d",&i) ;
	      scanf("%d",&a[i][j]);
	     }
	     else
		 {
		 	 printf("学号为%d同学的成绩未达标\n",i);
		 	 printf("请输入下一位\n");
        	 scanf ("%d",&i) ;
	         scanf("%d",&a[i][j]);
		 }
		  x++;
      	}
       return 0;
    }
