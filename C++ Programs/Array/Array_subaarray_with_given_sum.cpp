// find a continuous sub array which sum is equal to a given no. S
#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cout<<"Enter size and sum respectively: ";
    cin>>n>>s;//enter size and sum
    int a[n];
    cout<<"Enter element: ";
    for(int i=0; i<n; i++)
        cin>>a[i];
    int i=0, j=0;
    int st=0, en=0, sum=0;
    while(j<n && sum+a[j]<=s)// agle element ko add krke fir compare kr rha hai
    {
        sum+=a[j];//element ko add krte ja rha hai
        j++;//j ki last value ye to en hogi ya en se ek kam hogi
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j;//j ki value to ek extra hi hogi kyuki upar vale loop me sum me ek extra element bhi add ho skta hai
        return 0;// agar yahi condition puri ho rhi hai to main fucntion se bahar aa jao
    }
    while(j<n)//upar vale while loop me se jo j ki value aayegi vaha se start krna hai
    {

        sum+=a[j];//----to tum kya karo pichhe se ek aur element andar lelo mtlb en bada do
        while(sum>s)//jab hmne ek element isme extra add kiya hai to jahir si bat hai ye s se bada hi hoga
        {
            sum-=a[i];// array ki shuruat se element ko ghatate jao
            i++;// isme st store ho rha hai na aur j me en
        }
        if(sum==s)//minus krte krte hmari value aa gyi to ab loop se bahar nikal jao aur array undexing zero hai to isiliye +1 krdo
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;// agar hmare aage se ek element minus krne par sum ki value s se kam ho jati hai to mtlb shuru me hi koi ada no aa gya to----
    }
    cout<<st<<" "<<en;
}

