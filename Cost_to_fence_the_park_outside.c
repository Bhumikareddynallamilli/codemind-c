#include<stdio.h>
int main()
{
    int l,b,w,c,f_area,t_cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    f_area=((l+(2*w))*(b+(2*w)))-(l*b);
    t_cost=f_area*c;
    printf("%d",t_cost);
}