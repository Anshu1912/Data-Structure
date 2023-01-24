// Sum of all subarrays
#include<iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)// starting of subaarray
    {
        for(int j=i; j<n; j++)// adds following no.s
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
        sum=0;
    }
}
