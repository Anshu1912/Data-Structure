#include<stdio.h>
int bin_search(int arr[], int s, int e, int el)
{
    while(s<=e)
    {
       int  mid = (s+e)/2;
        if(arr[mid]==el)
        {
            return mid;
        }
        if(arr[mid]>el)
        {
            return bin_search(arr, s, mid-1, el);
        }
        else
        {
            return bin_search(arr, mid+1, e, el);
        }
    }
    return -1;
}
int main()
{
    printf("Enter no. of elements- ");
    int n, el;
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted elements- ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched- ");
    scanf("%d", &el);
    int index = bin_search(arr, 0, n-1, el);
    if(index == -1)
    {
            printf("Element not found");
    }
    else
    {
            printf("Element found at index- %d", index+1);
    }
    return 0;
}
