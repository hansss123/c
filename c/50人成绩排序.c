# include <stdio.h> 
     int main ()
    {
	 int x,i,j;
	 int a[50][50];
	  j=1;
	  printf ("������˵�ѧ�źͳɼ�\n");
	  scanf ("%d",&i) ;
	  scanf("%d",&a[i][j]);
      while(x<=50)
		{
		 if (a[i][j]>=80)
		 {
		  printf ("ѧ��Ϊ%d\n �ɼ�Ϊ%d\n", i,a[i][j]);
		  printf("��������һλ\n");
          scanf ("%d",&i) ;
	      scanf("%d",&a[i][j]);
	     }
	     else
		 {
		 	 printf("ѧ��Ϊ%dͬѧ�ĳɼ�δ���\n",i);
		 	 printf("��������һλ\n");
        	 scanf ("%d",&i) ;
	         scanf("%d",&a[i][j]);
		 }
		  x++;
      	}
       return 0;
    }
