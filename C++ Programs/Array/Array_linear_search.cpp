///Linear Search in an Array

#include<iostream>
using namespace std;
int linear_Search( int arr[],int n,int k)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k)
        {
               cout<<"At the index of ";
               return i;
        }

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
    cout<<linear_Search(arr, n, k);
}
