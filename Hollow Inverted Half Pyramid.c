#include<stdio.h>
int hollow_inverted_half_pyramid(int m);

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
      if(i==1||i==m||j==1||j==i)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}
