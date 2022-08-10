#include<stdio.h>
void binary(int);
void binary(int a)
{ int k;
    if(a==0)
    {
    printf("%d",a&1);
    return ;
    }
    k=a&1;
    
    a=a>>1;
    binary(a);
    printf("%d",k);
}
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
binary(n);
return 0;
}