#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no.  ";
    cin>>n;
    while(n>0)
    {
        int d=n%10;
        cout<<"   "<<d;
        n=n/10;
    }
}
