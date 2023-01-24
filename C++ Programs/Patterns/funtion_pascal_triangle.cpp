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
   int r;
   cout<<"Enter row for pascal triangle: ";
   cin>>r;
   for(int i=0; i<r; i++)
   {  //  for(int k=r-i; k>0; k--)
      //  cout<<"  ";

       for(int j=0; j<=i; j++)
    {
        cout<<fact(i)/(fact(i-j)*fact(j))<<"   ";

    }
    cout<<endl;

   }
return 0;
}


