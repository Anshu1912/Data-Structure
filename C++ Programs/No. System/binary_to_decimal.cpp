#include<iostream>
#include<math.h>
using namespace std;
int binary_to_decimal(int n)
{
    int sum =0, i=0;

    while(n>0)
    {
        int rem = n%10;
        sum += rem * pow(2,i);
        n/=10;
        i++;

    }
    return sum;

}
int main()
{   int n;
    cout<<" Enter your number: ";
    cin>>n;
    cout<<binary_to_decimal(n);

}
