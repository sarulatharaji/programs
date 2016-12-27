int main(){
    int num,r,sum,temp,a,b;
    printf("enter range :");
    scanf("%d %d",&a,&b);
    for(num=a;num<=b;num++)
        {
         temp=num;
         sum = 0;
         while(temp!=0)
            {
             r=temp%10;
             sum=sum+(r*r*r);
            temp=temp/10;
           }
         if(sum==num)
             printf("%d ",num);
    }
    return 0;
}
