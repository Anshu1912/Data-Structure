//            Program to convert decimal no. to Octal no.       //
#include<iostream>
#include<math.h>
using namespace std;
void Decimal_to_Octal(int n)
{

    int i=0,rem=0;
    int binary_no=0;
    int arr[i];

    while(n>0)
    {
            rem = n%8;
            n/=8;
            arr[i] = rem;
            i++;

    }
      for(int j=i-1; j>=0; j--)
      {
          cout<<arr[j];
      }
}
int main()
{   int n;
    cout<<" Enter your number: ";
    cin>>n;
    Decimal_to_Octal(n);

}
