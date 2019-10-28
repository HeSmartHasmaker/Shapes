#include<stdio.h>

int rectangle(int m,int n);

int main()
{
  int r,c;

  printf("Enter Number of Rows :");
  scanf("%d",&r);
  printf("Enter Number of Coulums :");
  scanf("%d",&c);
  rectangle(r,c);


}

int rectangle(int m,int n)
{
  int i,j;

  for(i=1;i<=m;i++)
  {
    for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==m||j==n)
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
