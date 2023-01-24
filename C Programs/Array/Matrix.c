#include<stdio.h>
int main()
{
    int r,c,sum=0;
    printf("Enter no. of rows and columns in 2D array-  ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("\n Enter the elements in 2D array - \n ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("Array[%d][%d] -  ",i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("Sum of these all elements - %d", sum);
    return 0;
}
