///     Program to add two binary numbers     //
#include<iostream>
#include<math.h>
using namespace std;

void addition( int a, int b)
{
    char ans[100];   /// it will store answer and last me easily ulta karke print kr denge
    int carry=0;
    int index = 0;



    while(a>0 && b>0)   /// dono no.0 se bade hai to
    {

                if (a%2==0 && b%2==0)  /// 0+0 + carry 0 = 0    0+0 + carry 1= 1    koi carry generate nhi hoga
                {
                    if(carry==0)
                    {
                        ans[index++] = '0'; /// ans in index store karke index increment kar do  //note: postincrement
                        carry=0;
                    }
                    else   ///  carry==1
                    {
                       ans[index++] = '1';
                       carry=0;
                    }
            }
             else if(a%2==1 && b%2==1)     /// 1+1 + carry 0 = 0 with carry 1    1+1 + carry 1= 1 with carry 1
            {
                if(carry==1)
                {
                    ans[index++]='1';
                    carry=1;
                }
                else if(carry==0)
                {
                    ans[index++]='0';
                    carry=1;
                }
            }
            else   ///  0+1/(1+0) + carry 0 = 1    1+0 /(0+1) + carry 1= 0 with carry 1
            {
                if(carry==0)
                {
                    ans[index++]='1';
                    carry==0;
                }
                else       ///if(carry==1)
                {
                   ans[index++]='0';
                    carry==1;
                }
            }
           a/=10;
           b/=10;
            }
    while(a>0&&b==0)   /// pehle no. bada hai to  ///  in case a= 111 and b= 10
    {

            if(a%2==0)
            {
                if(carry==0)
                {
                     ans[index++]='0';
                     carry=0;
                 }
                 else    ///(carry==1)
                {
                 ans[index++]='1';
                carry=0;
                 }
             }
        if(a%2==1)
        {
            if(carry==1)
            {
                ans[index++]='0';
                carry=1;
            }
            else   /// carry==0
            {
                ans[index++]='1';
                carry=0;
            }
        }
        a/=10;
    }
     while(b>0 && a==0)   ///  pehle no. bada hai to  ///  in case a= 11 and b= 1010
    {

            if(b%2==0)
            {
                if(carry==0)
                {
                 ans[index++]='0';
                  carry=0;
                }
        else    ///(carry==1)
            {
                 ans[index++]='1';
                carry=0;
            }
        }
        if(b%2==1)  /// a%2==1
        {
            if(carry==1)
            {
                ans[index++]='0';
                carry=1;
            }
            else   /// carry==0
            {
                ans[index++]='1';
                carry=0;
            }
        }
   b/=10;
    }
    if(carry==1) /// agar dono no. 0 ho gye hai lekin carry bacha hua hai
    {
        ans[index++]='1';
    }
///ans ko print kar rhe h
    for(int i = --index; i>=0;i--)
    {
        cout<<ans[i];
    }


    }

int main()
{  int  a,b;
    cout<<"Enter two binary number: ";
    cin>>a>>b;
    addition(a,b);
}
