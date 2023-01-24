#include<iostream>
using namespace std;

int fact(int f)
{   int fact=1;
    for(int i=1; i<=f; i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<" Enter n & r for binary coefficient (nCr):  ";
    cin>>n>>r;
   // n is the no. of total objects and r means the no. of
  //  objects required in the subset formed from the main set(n)
    int nCr = fact(n)/(fact(n-r)*fact(r));
    cout<<"  "<<nCr;
}

