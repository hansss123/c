# include <stdio.h>
void action1 (int x,int y)
{
	printf ("x+y=%d\n",x+y);
}
void action2 (int x,int y)
{
	printf ("x*y=%d\n",x*y);
}
int main ()
{
     char ch;
	 int a,b;
	 printf ("输入3个数逗号："); 
     scanf ("%d,%d,%c",&a,&b,&ch);
    
     /*ch = getchar ();*/
   
     switch (ch)
    {
        case 'a':
        case 'A': action1 (a,b); break;
        case 'b':
        case 'B': action2 (a,b); break;
        default : putchar ('\a');   // \a 为响铃符号发出 警告 
    }
    return 0;
}

