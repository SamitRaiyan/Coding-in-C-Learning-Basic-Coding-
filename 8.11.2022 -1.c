#include<stdio.h>
int main()
{
  int a,b;
  printf("input a & b:");
  scanf("%d %d",&a,&b);

  if(a>b)
  {
      printf("bigger:%d",a);
  }
  else if (a<b)
  {
      printf("bigger:%d",b);
  }
  else
  {
      printf("Numbers are equal");
  }


  return 0;
}
