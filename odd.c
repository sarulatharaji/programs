main()
{
int a,b,i;
printf("enter the range of a to b:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
     if(i%2!=0)
        printf("odd is:%d",i);
}
getch();

}
