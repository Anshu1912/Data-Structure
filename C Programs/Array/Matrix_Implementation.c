
#include<stdio.h>
int main()
{
    int r,c, arr[10][10], sum=0;
    printf("Enter no. of rows and columns of matrix -  ");
    scanf("%d %d", &r, &c);

    printf("\n Enter matrix elements - \n ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Entered matrix is -\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // to sum diagonal elements
     for(int i=0; i<r; i++)
    {
        sum+=arr[i][i];
    }
    printf("Sum of diagonal elements of this matrix - %d\n", sum);
    // to sum upper triangular elemnets of matrix
    if(r==c)
    {
        int upsum =0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i<=j)
                upsum+=arr[i][j];
            }
        }
        printf("Sum of upper triangular elements of this matrix - %d\n", upsum);
    }
    else
    {
        printf("Matrix is not square. Not possible to sum upper triangular elements.\n");

    }
    if(r==c)
    {
        int lwsum =0;
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                if(i>=j)
                lwsum+=arr[i][j];
            }
        }
        printf("Sum of lower triangular elements of this matrix - %d", lwsum);
    }
    else
    {
        printf("Not possible to sum lower triangular elements.");

    }
    return 0;
}
