#include<stdio.h>
int main()
{
  FILE *file;
  fopen("myfile.txt","w");
  if(file==NULL)
  {
      printf("None");
  }
  else
  {
      printf("valid");
      fclose(file);
  }



  getch();
}
