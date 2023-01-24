/// Sorting in Array with Bubble Sort

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int counter=0;
    while(counter<n-1)
    {
        for(int i=0; i<n-counter-1; i++)
        {
           if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    cout<<"Sorted array - ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
