// Maximum elements till current iteration within array
#include<iostream>
using namespace std;
int main()
{
    int n, mx= -9999999;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        mx= max(mx, arr[i]);
        cout<<mx<<" ";
    }
}
