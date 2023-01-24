///Binary Search in an Array[ increasing order]

#include<iostream>
using namespace std;
int Binary_Search( int arr[],int n,int k)
{   int s=0, e=n;

    while(s<=e)
    {   int mid = (s+e)/2;
        if (arr[mid]==k)
        {
            cout<<"At the Index of ";
            return mid;
        }
        else if (arr[mid]>k)
            e=mid-1;
        else
            s=mid+1;
    }
    return -1;
}
int main()
{
    int n,k;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Enter the key: ";
    cin>>k;
    cout<<Binary_Search(arr, n, k);
}
