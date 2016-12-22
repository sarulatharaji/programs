#include<stdio.h>
main()
{
int a,b,c;
printf("enter value of a,b,c:");
scanf("%d %d %d",&a,&b,&c);
if((a>b)&&(a>c))
   printf("greatest is :%d",a);
else if(b>c)
   printf("greatest is :%d",b);
else
   printf("greatest is:%d",c);
getch();
}
