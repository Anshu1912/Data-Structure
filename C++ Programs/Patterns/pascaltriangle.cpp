/*      1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1                 */

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {   int coef = 1;
        for(int s=1; s<=n-i; s++)
            cout<<"  ";
        for(int j=1; j<=i; j++)
        { cout<<coef<<"   ";
          coef= coef*(i-j)/j;

        }
        cout<<endl;
    }
}
