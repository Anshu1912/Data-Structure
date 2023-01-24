//            Program to convert decimal no. to binary no.       //
#include<iostream>
#include<math.h>
using namespace std;
void decimal_to_binary(int n)
{

    int i=0,rem=0;
    int binary_no=0;
    int arr[i];

    while(n>0)
    {
            rem = n%2;
            n/=2;
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
    decimal_to_binary(n);

}
