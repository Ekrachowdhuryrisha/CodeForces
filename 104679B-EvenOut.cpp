#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t-->0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int even=0, odd=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd%2==0){
            cout<<n<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }


    return 0;
}
 
