#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int tsum = accumulate(arr, arr+n, 0);

    sort(arr, arr+n);
    int sum = 0, mysum =0, count=1;
    for(int i=n-1; i>=0; i--)
    {
       // cout<<arr[i]<<endl;
        sum= sum + arr[i];
        mysum = tsum -sum;
        if( sum>mysum)
        {
            cout<<count<<endl;
            return 0;
        }
        else
        {
            count++;
        }
    }
    return 0;
}
