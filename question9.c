#include<stdio.h>
void octal(int a)
{ int k;
    if(a==0)
    {
    // printf("%d",a);
    return ;
    }
    k=a%8;
    
    a=a/8;
    octal(a);
    printf("%d",k);
}
int main()
{
int n;
printf("enter a number: ");
scanf("%d",&n);
printf("octal of a given number is: ");
octal(n);

    return 0;
}