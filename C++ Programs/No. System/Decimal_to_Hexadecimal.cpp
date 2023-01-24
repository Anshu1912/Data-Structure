//            Program to convert decimal no. to hexadecimal no.       //
#include<iostream>
#include<math.h>
using namespace std;
void Decimal_to_Hexa(int n)
{

    int i=0;
    int rem;
    int binary_no=0;
    string arr = "";

    while(n>0)
    {
            rem = n%16;
            n/=16;
            arr[i] = rem;
            i++;

    }
      for(int j=i-1; j>=0; j--)
      {
          if(arr[j]>=0 && arr[j]<=9)
          cout<<arr[j];
          else if(arr[j]== 10)
          cout<<"A";
          else if(arr[j]== 11)
            cout<<"B";
          else if(arr[j]==12)
            cout<<"C";
          else if(arr[j]==13)
            cout<<"D";
          else if(arr[j]==14)
            cout<<"E";
          else if(arr[j]==15)
            cout<<"F";
      }
}
int main()
{   int n;
    cout<<" Enter your number: ";
    cin>>n;
    Decimal_to_Hexa(n);

}
