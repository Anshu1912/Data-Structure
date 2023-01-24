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
    const int N= 1e6+2;
    bool b[N];
    for(int i=0; i<n; i++)
    {
         b[i]= {false};
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=0)// store true in the second array at the index of a[i] that means i element of array a
        {           // than in second array whatever the first index we get which stored false value will be our answer
                    //because we are taking array a's element as index for the second array and storing true in that index
            b[a[i]]=true;//index of array b is the element of array a
        }

    }
    for(int i=1; i<N; i++)
    {
        if(b[i]==false)
        {
            cout<<"Smallest positive missing no.: "<<i;
            break;
        }
    }

}


