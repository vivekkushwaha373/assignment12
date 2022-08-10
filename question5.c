#include<stdio.h>
#include<stdio.h>
void natural(int n)
{
  if(n==1)
  {
    printf("%d\n",2*n);
    return ;
  }
  natural(n-1);
  printf("%d\n",2*n);
}
int main()
{int n;
printf("entre a number: ");
scanf("%d",&n);
// printf("%d",natural(n));
natural(n);
    return 0;
}