#include<stdio.h>
int main()
{
    int a,b,sum=0,remain;
    scanf("%d",&a);
    b=a*a;
    while(b!=0)
    {
        remain=b%10;
        sum=sum+remain;
        b=b/10;
    }
    if(a==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}