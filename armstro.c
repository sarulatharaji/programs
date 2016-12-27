#include <stdio.h>
int main()
{
    int number,temp,r,result = 0;
    printf("Enter a integer: ");
    scanf("%d", &number);
    temp=number;
    while(temp!=0)
    {
        r =temp%10;
        result+=r*r*r;
        temp=temp/10;
    }
    if(result==number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}

