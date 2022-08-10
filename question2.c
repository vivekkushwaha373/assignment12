#include<stdio.h>
void natural(int n)
{
  if(n==1)
  {
    printf("%d\n",n);
    return ;
  }
   printf("%d\n",n);
  natural(n-1);
 
}
int main()
{int n;
printf("entre a number: ");
scanf("%d",&n);
// printf("%d",natural(n));
natural(n);
    return 0;
}