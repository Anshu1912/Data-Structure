// to find index of first repeating element in an array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int a[n];
    cout<<"Enter element: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    for(int i=0; i<n; i++)
    {
         b[i]= {-1};
    }
    int temp, mini=n;
    for(int i=0; i<n; i++)
    {
        temp=a[i];
        if(b[temp]==-1)
        {
            b[temp]=i;
        }
        else
        {
            mini=min(b[temp],mini);
        }
    }
    cout<<"Index of first repeating element: "<<mini;
}
