main()
{
int a,b,even;
printf("enter the range of a to b:");
scanf("%d %d",&a,&b);
for(even=a;even<=b;even++)
{
     if(even%2==0)
        printf("odd is:%d",even);
}
getch();
}
