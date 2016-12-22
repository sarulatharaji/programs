#include<stdio.h>
main()
{
int n;
scanf("%d",&n);
if(n>0&&n!=0)
    printf("positive:%d",n);
else if(n<0&&n!=0)
    printf("negative:%d",n);
else
    printf("zero");
getch();
}
