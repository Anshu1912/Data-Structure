// sparse to 2D and 2D to sparse
#include<stdio.h>
int main()
{
    int m=4, n=4;
    int arr[m][n];
    printf("Enter the elements - \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[m][n]);
        }
    }
    int count =0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]!=0)
            {
                count++;
            }
        }
    }
    int b[count][3];
    b[0][0] =m;
    b[0][1] =n;
    b[0][2] =count;
    int k=1;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[i][j]!=0)
            {
                 b[k][0] =i;
                b[k][1] =j;
                b[k][2] =arr[i][j];
                k++;
            }
        }
    }
    printf("Sparse metrix - \n");
    for(int i=0; i<count+1; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d", b[i][j]);
        }
        printf("\n");
    }
    return 0;

}






















































































