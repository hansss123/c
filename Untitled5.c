# include <stdio.h>
# define n 5
int main () 
{
	void fun (int a[5]);   //�������� 
	int i,a[5];
	printf ("������n=5������\n");
	for (i=0;i<5;i++)
	{
		scanf ("%d",&a[i]);
	}
	printf ("������������£�\n");
	for (i=0;i<5;i++)
	{
		printf (" %d",a[i]);
	}
	printf ("\n");
	printf ("����������ǣ�\n");
	//q=a;//��ָ��ָ��ǰ�ĵ�һ��Ԫ�� 
	fun (a); //���ú���������������� 
	return 0;
}
void fun (int a[5])  // ���庯�� 
{
	int i,j,c;  //c��Ϊ�м���� 
	//for (i=0;i<n;i++)
	//{
	//	a[i]=p[i];  //�������ַ����ָ������� 
	//}
	for (i=0;i<n;i++)  //n��������0��ʼ 
	{
		for (j=1;j<n;j++)  //���������ǰ��������������ٴ�1 
		{
			if (a[j]>a[j-1])  //�Ƚϴ�С�� �����Ӵ�С��� 
			{
				 c=a[j];
				 a[j]=a[j-1];
				 a[j-1]=c;
			}
		}
	}
	for (i=0;i<5;i++) //������ 
	{
		printf ("%4d",a[i]);
	}
}
