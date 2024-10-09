#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int max1;
        if(n==3)
        {
            max1 = max(arr[0],arr[2]);
            cout<<max1+(n/2)+1<<endl;
        }
        else
        {
            int max2 = *max_element(arr, arr+n);


            if(n%2==0)
            {
                cout<<max2+(n/2)<<endl;
            }
            else
            {
                cout<<max2+(n/2)+1<<endl;
            }
        }
    }

    return 0;
}
