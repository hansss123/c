# include <stdio.h>
# define n 5
int main () 
{
	void fun (int a[5]);   //函数声明 
	int i,a[5];
	printf ("请输入n=5个数：\n");
	for (i=0;i<5;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("输入的数组如下：\n");
	for (i=0;i<5;i++)
	{
		printf (" %d",a[i]);
	}
	printf ("\n");
	printf ("排序后数组是：\n");
	//q=a;//用指针指向当前的第一个元素 
	fun (a); //调用函数输出排序后的数组 
	return 0;
}
void fun (int a[5])  // 定义函数 
{
	int i,j,c;  //c作为中间变量 
	//for (i=0;i<n;i++)
	//{
	//	a[i]=p[i];  //把数组地址放在指针变量里 
	//}
	for (i=0;i<n;i++)  //n个数，从0开始 
	{
		for (j=1;j<n;j++)  //后面的数除前面的数，所以至少大1 
		{
			if (a[j]>a[j-1])  //比较大小， 排序后从大到小输出 
			{
				 c=a[j];
				 a[j]=a[j-1];
				 a[j-1]=c;
			}
		}
	}
	for (i=0;i<5;i++) //输出结果 
	{
		printf ("%4d",a[i]);
	}
}
