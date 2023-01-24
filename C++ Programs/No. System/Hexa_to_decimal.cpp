#include<iostream>
//#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int Hexa_to_decimal(string n)
{
    int sum =0, k=0, digit = 0;
    int s = n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            digit = n[i]-'0';
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            digit = n[i]-'A'+10;
        }
        sum+= digit*pow(16,k);
        k++;
    }
    return sum;
}

int main()
{   string n;
    cout<<" Enter your number: ";
    cin>>n;
    cout<<Hexa_to_decimal(n);

}


