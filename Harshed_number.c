
#include<stdio.h>
int main()
{
    int a,s=0,q,r;
    scanf("%d",&a);
    q=a;
    while(q>0)
    {
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(a%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
