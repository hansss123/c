# include <stdio.h> 
 

int main()
{
	int i,j,y,z;
	int a[50][50];
	int x;//ÐÐ 
	
	scanf("%d",&x); 
    printf("1\n"); 
	for(i=1;i<x;i++)
     for (j=0;j<=i;j++)
   { 
	 if(i==j||j==0)
	    a[i][j]=1;
		 
	 else 
	    a[i][j]=a[i-1][j]+a[i-1][j-1];
		printf ("%d ",a[i][j]);
		
	 if(i==j)
		printf(" \n");
 	
	}
		
   

	
	return 0;
}
 
 
 
