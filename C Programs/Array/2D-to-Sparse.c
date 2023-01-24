// 2D to sparse matrix

#include<stdio.h>
int main()
{
    int r,c;
    printf("*Details of matrix of which sparse matrix is to be generated*\n Enter no. of rows and columns - ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter the elements - \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int count =0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]!=0)
            {
                count+=1;
            }
        }
    }
    int sp[count][3];
    sp[0][0] = r;
    sp[0][1] = c;
    sp[0][2] = count;
    int k=1;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]!=0)
            {
                 sp[k][0] =i+1;
                sp[k][1] =j+1;
                sp[k][2] =arr[i][j];
                k++;
            }
        }
    }

    printf("Sparse metrix - \n Row Column Value\n");
    for(int i=0; i<count+1; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ", sp[i][j]);
        }
        printf("\n");
    }
    return 0;

}






















































































