// sparse matrix to 2D  matrix
#include<stdio.h>
int main()
{
    int vals,ri,ci,element;
    printf("Enter no. of values in Sparse matrix - ");
    scanf("%d", &vals);
    int sp[vals+1][3];
    printf("Enter sparse matrix - \n(Row Column Value) \n ");
    for(int i=0; i<=vals; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &sp[i][j]);
        }

    }
    int r= sp[0][0];
    int c= sp[0][1];
    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            arr[i][j] = 0;
        }
    }
    for(int i=1; i<=vals; i++)
    {
        int j=0;
        ri = sp[i][j];
        ci = sp[i][j+1];
        element = sp[i][j+2];
        arr[ri][ci] = element;

    }
    printf(" Matrix is - \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
