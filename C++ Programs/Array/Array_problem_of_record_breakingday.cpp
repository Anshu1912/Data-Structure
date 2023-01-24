// a day is record breaking if it has largest no. of visitors on previous days and the following day

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter total no. of days: ";
    cin>>n;
    int arr[n];
    cout<<"Enter visitors per day: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mx=0, counter=0;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]>mx && arr[i-1]>arr[i] )//visitor's no. should be larger than following day and previous record breaking day
        {
            counter++;// count the record breaking day
        }

        mx = max(arr[i-1],mx);  //remain the no. of visitors on a previous record breaking day

        if(i == n-1 && arr[i]>mx  )//this condition is only for last element
        {
            counter++;
        }
     }

    cout<<"The no. of record breaking days: "<<counter;
    return 0;
}
