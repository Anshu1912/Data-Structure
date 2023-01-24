#include<stdio.h>
int main()
{
    int n;
    int arr[10] = {23, 52, 3, 5, 8, 100, 78, 89, 9, 10};
    printf("Enter the no. you want to search-");
    scanf("%d", &n);
    for(int i=0; i<10; i++)
    {
        if(arr[i]==n)
        {
            printf("%d Item found at %d", n, i+1);
            break;
        }
        else if(i==9)
        {
                        printf("Item not found in array", n, i);

        }
    }
}
