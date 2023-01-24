// insertion in array & deletion in array
#include<stdio.h>
int main()
{
    int n, arr[30], loc, item;
    printf("Enter no. of elements you want to insert in array - ");
    scanf("%d", &n);
    printf("Enter elements - \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter location where you want to insert new element, and the element - ");
    scanf("%d %d",&loc, &item);

    for(int i=n-1; i>=loc-1; i--)
         {
        arr[i+1] = arr[i];
        }
        arr[loc-1]=item;
    printf("\n %d is inserted at %dth index. \n", item,loc);
    for(int i=0; i<n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;

}
/*
#include<stdio.h>
int main()
{
    int n, arr[30], loc;
    printf("Enter size of array - ");
    scanf("%d", &n);
    printf("Enter elements - \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element position to delete - ");
    scanf("%d",&loc);
    if(loc<0 || loc>n)
    {
        printf("Invalid Position!");
    }
    else
    {
            for(int i=loc-1; i<n-1; i++)
         {
        arr[i] = arr[i+1];
        }
    n=n-1;
    printf("\n Elements after deletion - \n");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    }
    return 0;
}*/
