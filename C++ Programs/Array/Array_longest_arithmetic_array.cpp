// arithmetic array is that array which have same differences in its elements like: {3,3,3} {2,4,6}
// output the length of the longest arithmetic sub array
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pd=0, cd=0, temp=0, length, count=2;// minimum length of the arithmetic sub array will be 2
    for(int i=0; i<n; i++)
    {
        pd=cd; // to distinct previous and current difference
        cd=arr[i+1]-arr[i];// this is the current difference between two elements
        if(pd==cd)  // if previous and current difference is same then it is an arithmetic sub array
        {
            count++; // so +1 in the length
        }
        else  //  it means from here an another arithmetic sub array has started
        {
            length=max(temp,count);//store the maximum of current subarray length and previous subarray length which is in temp variable
            temp=count;// store the length of previous sub array and
            count=2;  // initialize count with its initial value for calculating the next arithmetic sub array length
        }
    }
    cout<<"Length of the longest arithmetic sub array: "<<length;
    return 0;
}


