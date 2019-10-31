#include<stdio.h>

int full_pyramid(int m);

int main()
{
  int b;

  printf("Enter Number of Stars at base :");
  scanf("%d",&b);

  full_pyramid(b);
}

int full_pyramid(int m)
{
  int i,j,k=0;

  for(i=1;i<=m;++i,k=0)
  {
    for(j=1;j<=m-i;++j)
    {
      printf(" ");
    }
    while(k!=2*i-1)
    {
      printf("*");
      ++k;
    }
    printf("\n");
  }
}
