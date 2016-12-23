#include<stdio.h>
main()
{
int sum=0,n,i;
printf("enter the size:");
scanf("%d",&n);
for(i=0;i<=n;i++)
   {
    sum=sum+i;
   }
printf("sum:%d",sum);

getch();
}
