# include <stdio.h>

int bj(int i, int j, int n)
{
	int m;
	if(i>j)
	 n=i;
	else
	 n=j;
	 
	return m;
 } 
int main ()
{
	int a,b,c,d,e,e1,f,g,h,i,j,k,l,m,n;
	int jd1,jd2,jd3,jd,max;
	int jx1,jx2,jx3,jx,min;
	int zz1,zz2,zz3,zhong;
	int js1,ja1,js,ja;
	printf("请输入所需排序的整数："); 
	scanf ("%d %d %d %d %d",&a,&b,&c,&d,&e);
	//printf("%d %d %d %d %d\n",a,b,c,d,e);
	f=a-b;
	if (f>0)
	{jd1=a; 
	 jx1=b;
	}
	else
	{jd1=b;
	 jx1=a;
	}
	
	g=c-d;
	if (g>0)
	{jd2=c;
	 jx2=d;
	}
	else
	{jd2=d;
	 jx2=c;
	}

	h=jd1-jd2;
	if (h>0)
	{jd3=jd1;
	 zz1=jd2;
	}
	else
	{jd3=jd2;
	 zz1=jd1;
	}
	
	i=jx1-jx2;
	if (i>0)
	{jx3=jx2;
	 zz2=jx1;
	}
	else
	{jx3=jx1;
	 zz2=jx2;
	}

	j=jd3-e;
	k=jx3-e;
	if (j>0 && k>0)
	{max=jd3;
	zz3=jx3;
	min=e;
	}
	if (j>0 && k<0)
	{max=jd3;
	 zz3=e;
	 min=jx3;
	 } 
	 if (j<0)
	 {max=e;
	  zz3=jd3;
	  min=jx3;
	 }
	 
	l=zz1-zz2;
	if (l>0)
	{js1=zz1;
	 ja1=zz2;
	}
	else
	{js1=zz2;
	 ja1=zz1;
	}
 
	m=js1-zz3;
	n=ja1-zz3;
	if (m<0)
	{js=zz3;
	 zhong=js1;
	 ja=ja1 ;
	}
	if (m>0 && n>0)
	{js=js1;
	 zhong=ja1;
	 ja=zz3;
	}
	if (m>0 && n<0)
	{js=js1;
	 zhong=zz3;
	 ja=ja1;
	}
	

printf ("%d %d %d %d %d",min,ja,zhong,js,max);	
return 0;	
}
