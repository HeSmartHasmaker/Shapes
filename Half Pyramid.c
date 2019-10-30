#include<stdio.h>
int half_pyramid(int m);

int main()
{
  int b;

  printf("Enter Number of Stars at base :");
  scanf("%d",&b);

  half_pyramid(b);
}
int half_pyramid(int m)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
