#include<stdio.h>
int rectangle(int m,int n)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
int main()
{
  int r,c;

  printf("Enter Number of Rows :");
  scanf("%d",&r);
  printf("Enter Number of Coulums :");
  scanf("%d",&c);
  rectangle(r,c);
}
