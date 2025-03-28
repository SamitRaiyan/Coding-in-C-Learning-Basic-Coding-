// 28.11.2022 -1 2D Array
/*
   Array- Matrix
*/

#include<stdio.h>
int main()
{

    int i,j,m,n;
    printf("Input the order of the matrix: ");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("Input the elements of the matrix: ");
    //Array Input
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    //Array Output
    printf("Ans=\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");


    }






    getch();
}



