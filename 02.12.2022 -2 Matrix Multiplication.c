// 02.12.2022 -2 Matrix Multiplication
/*
  2D Array
*/

#include<stdio.h>
int main()
{
    {
        int i,j,k,m,n,o,p;
        //For First Matrix:
        printf("Input the order of the first matrix: ");
        scanf("%d %d",&m,&n);
        int A[m][n];
        printf("Input the elements of the matrix: ");

        //First Array Input:
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }

        //First Array Output:
        printf("A=\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");

        }

        //For Second Matrix:
        printf("Input the order of the second matrix: ");
        scanf("%d %d",&o,&p);
        int B[o][p];
        printf("Input the elements of the matrix: ");

        //Second Array Input:
        for(i=0; i<o; i++)
        {
            for(j=0; j<p; j++)
            {
                scanf("%d",&B[i][j]);
            }
        }

        //Second Array Output:
        printf("B=\n");
        for(i=0; i<o; i++)
        {
            for(j=0; j<p; j++)
            {
                printf("%d ",B[i][j]);
            }
            printf("\n");

        }
        //Matrix Multiplication:
        if(n==o )
        {
            int C[m][p];
            for(i=0; i<m; i++)
            {
                for(j=0; j<p; j++)
                {
                    for(k=0; k<m; k++)
                    {
                        int sum= 0;
                        sum=sum+A[i][j]*B[i][j];
                        C[i][j]=sum;
                        sum=0;
                    }
                }
            }
            printf("Ans=\n");
            for(i=0; i<m; i++)
            {
                for(j=0; j<n; j++)
                {
                    printf("%d ",C[i][j]);
                }
                printf("\n");

            }
        }
        else
        {
            printf("Cannot be multiplied");

        }







        getch();
    }
}
