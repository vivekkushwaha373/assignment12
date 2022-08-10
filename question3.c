#include<stdio.h>
#include<stdio.h>
void natural(int n)
{
  if(n==1)
  {
    printf("%d\n",n);
    return ;
  }
  natural(n-1);
  printf("%d\n",2*n-1);
}
int main()
{int n;
printf("entre a number: ");
scanf("%d",&n);
// printf("%d",natural(n));
natural(n);
    return 0;
}