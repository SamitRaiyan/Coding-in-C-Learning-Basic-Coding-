//A program to cheek GPA (Usage of conditional statement)

#include<stdio.h>
int main()
{
  int m;
  printf("input the mark:");
  scanf("%d",&m);
  if(m<=100 && m>-1)
  {
      if(m>79)
      {
          printf("Result: A+");
      }
      else if (m<=79 && m>69)
       {
          printf("Result: A");
      }
      else if (m<=69 && m>59)
       {
          printf("Result: A-");
      }
      else if (m<=59 && m>49)
       {
          printf("Result: B");
      }
      else if (m<=49 && m>39)
       {
          printf("Result: C");
      }
      else if (m<=39 && m>32)
       {
          printf("Result: D");
      }
      else
       {
          printf("Result: Fail");
      }
  }
  else
  {
   printf("The mark is invalid");
  }


  return 0;
}
