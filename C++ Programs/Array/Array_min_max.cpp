/// Program to find maximum and minimum in array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int Max = INT_MIN;
    int Min = INT_MAX;
    for(int i=0; i<n; i++)
    {
         Max = max(Max,arr[i]);
         Min = min(Min,arr[i]);
    }
    cout<<Max<<"   "<<Min;

}
