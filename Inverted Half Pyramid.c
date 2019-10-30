#include<stdio.h>
int inverted_half_pyramid(int m);

int main()
{
  int b;

  printf("Enter Number of Stars at base :");
  scanf("%d",&b);

  inverted_half_pyramid(b);
}
int inverted_half_pyramid(int m)
{
  int i,j;

  for(i=m;i>=1;i--)
  {
    for(j=i;j>=1;j--)
    {
      printf("*");
    }
    printf("\n");
  }
}
