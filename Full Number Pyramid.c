#include<stdio.h>

int full_pyramid(int m);

int main()
{
  int b;

  printf("Enter Number of Stars at base :");
  scanf("%d",&b);

  full_num_pyramid(b);
}
int full_num_pyramid(int m)
{
  int i,j,k,s;

  s=m;
  for(i=1;i<=m;i++)
  {
    for(j=1;j<=s;j++)
    {
      printf(" ");
      s--;
    }
    for(k=1;k<=i;k++)
    {
      printf("%d ",i);
    }
    printf("\n");
  }
}
