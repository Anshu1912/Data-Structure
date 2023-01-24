/*   * * * * *
     * * * * *
     * * * * *    */
#include<iostream>
using namespace std;
int main()
{   int r,c;
    cout<<"Enter no. of rows and columns:  ";
    cin>>r>>c;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

