#include<stdio.h>
int main()
{
    int i,n,s;
    printf("Total number : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the data : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The input data :");
    for(i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
    printf("\nThe data you want to find : ");
    scanf("%d",&s);
    int position = -1;
    for(i=0;i<n;i++){
        if(s==a[i]){
            position = i+1;
            break;
        }
    }
   if(position>0){
    printf("The data position: %d",position);
   }
   else{
    printf("Not Found");
   }

    return 0;
}
