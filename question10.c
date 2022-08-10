#include<stdio.h>

int reverse(int a)
{ int k;int static s=0;
    if(a==0)
    {
    // printf("%d",a);
    return 0;
    }
    k=a%10;
    // a=a/10;
    s=s*10+k;
    reverse(a/10);
    return s;
}
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
printf("reverse is : %d",reverse(n));

    return 0;
}