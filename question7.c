#include<stdio.h>
int square(int);
int square(int n)
{
    if(n==1)
    return 1;
    s=n*n+square(n-1);
    return s;
}
int main()
{
   int sum;int a;
   printf("enter a number: ");
   scanf("%d",&a);
   sum=square(a);
   printf("the sum of squares are: %d",sum);
    return 0;
}