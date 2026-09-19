#include<stdio.h>


int main()
{
    int a,b,q,r;
    printf("ENTER DIVIDEND=");
    scanf("%d",&a);
    printf("ENTER DIVISOR=");
    scanf("%d",&b);
    q=a/b;
    r=a-(b*q);
    printf("REMAINDER=%d",r);
    return 0;
}