#include<stdio.h>



void swap(int a, int b)
{
    int temp = a;
    a = b;
    b= temp;
}

int partition(int array[], int  lb, int ub)
{
    int pivot;
    pivot= array[lb];
    int start = lb;
    int end = ub;
    while(start<end)
    {
        while(array[start]<=pivot)
        {
            start++;
        }
        while(array[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(array[start], array[end]);
        }
    }
    swap(array[lb],array[end] );
    return end;
}

void quicksort(int array[], int lb, int ub)
{
    if(lb<ub)
    {
        int loc = partition(array, lb, ub);
        quicksort(array, lb, loc-1);
        quicksort(array, loc+1, ub);
    }
}
int main()
{  int n;
printf("Enter no. of elements in array - ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements - \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

	quicksort(arr, 0, n- 1);

	printf("\nArray is sorted using Quicksort - \n");
	for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }

	return 0;
}
