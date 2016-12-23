#include<stdio.h>
#include<conio.h>
main()
{
char alpha;
printf("enter the input:");
scanf("%c",&alpha);
if((alpha>=65&&alpha<=90)||(alpha>=97&&alpha<=122))
    printf("%c is an alphabet",alpha);
else
    printf("%c is not an alphabet",alpha);
getch();
}
